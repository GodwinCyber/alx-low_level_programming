#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array of integer
 * using the interpolation search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of the element in the array.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1
 * if value is not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			    (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
