#include "hash_tables.h"

/**
 * hash_table_create - craete a hash table
 * @size: size is the size of array
 * Return: return pointer to the new created
 * hash table,if something went wrong, return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
