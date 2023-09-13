#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  searches for an integer.
 * @array: The pointer to integer array
 * @size: the size of the array
 * @cmp: the function pointer to the comparison
 * Return: The index of the first element for which cmp
 * does not return 0, if no element matches or size <= 0,
 * return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
