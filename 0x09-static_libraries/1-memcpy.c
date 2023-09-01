#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination of memory area
 * @src: pointer to the source of memory area
 * @n: the number of memory in byte to copy
 * Return:  pointer to the destination of memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
