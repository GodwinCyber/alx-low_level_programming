#include "search_algos.h"

/**
 * linear_search - search for a value in array of integers
 * @array: Poniter to the first element of the array to search in
 * @size: The number of element in array
 * @value: The value to search for
 * Return: The first index where value is located, or -1 if value is
 * not present or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%li] = [%i]\n", k, array[k]);
		if (array[k] == value)
		{
			return (k);
		}
	}
	return (-1);
}
