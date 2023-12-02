#include "hash_tables.h"

/**
 * shash_table_create - create shash table
 * @size: The size of array
 * Return: return pointer to the new created table,
 * if something went wrong return NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - add element tpo the shash table
 * @key: the key string
 * @ht: A pointer to the shash table
 * @value: valu corresponding to the key
 * Descirption: In case of collision, add a new
 * line at the begnning of every list
 * Return: return 1 if success, return 0 if otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *tmp, *prev, *next;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_copy;
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(value_copy);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	prev = NULL;
	next = ht->shead;
	while (next != NULL && strcmp(next->key, key) < 0)
	{
		prev = next;
		next = next->snext;
	}
	new->sprev = prev;
	new->snext = next;
	if (prev != NULL)
		prev->snext = new;
	else
		ht->shead = new;
	if (next != NULL)
		next->sprev = new;
	else
		ht->stail = new;

	return (1);
}

/**
 * shash_table_get - retrieve value associated with key
 * @ht: pointer to the shash table
 * @key: the key string
 * Return: return the value assocaited with the element,
 * if the key coudld not be found, return NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print - print the shash table
 * @ht: the pointer to the shash table
 * Description: You should print the key/value
 * in the order that they appear in the array of
 * hash table Order: array, list
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
