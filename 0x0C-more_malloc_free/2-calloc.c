#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of the element
 * @size: size of the element
 * Return: The pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *ptr = NULL;

	total_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(total_size);

	if (ptr != NULL)
	{
		for (i = 0; i < total_size; i++)
		{
			ptr[i] = 0;
		}
	}
	return (ptr);
}
