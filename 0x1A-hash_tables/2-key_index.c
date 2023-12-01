#include "hash_tables.h"

/**
 * key_index - write a function that your the index of a key
 * @key: The key to egt to the next hash of
 * @size: string that used to generate the hash value
 * Return: The hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
