#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of byte tobe files
 * Return: pointer to memry area at s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
