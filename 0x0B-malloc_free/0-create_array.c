#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create an array of character and
 * initialize it with a specific charater.
 * @size: the charcter size of the array to create
 * @c: character to initialize the array
 * Return: return a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
