#include "hash_tables.h"

/**
 * hash_table_print - function that prints
 * a hash table.
 * @ht: A pointer to hash table to print
 * Return: You should print the key/value
 * in the order that they appear in the
 * array of hash table: If ht is NULL,
 * don’t print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s':'%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
