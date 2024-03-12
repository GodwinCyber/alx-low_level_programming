#include "search_algos.h"
/**
 * min - Utility function to find the minimum of two numbers
 * @a: First number.
 * @b: Second number.
 * Return: The smaller of the two number
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search -  searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 * Return:  the first index where value is located,
 * if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), prev, step;

	if (!array || size == 0)
		return (-1);

	for (prev = 0; prev < size && array[prev] < value;
			step = prev, prev += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev, min(step, size));

	for (; step <= min(prev, size - 1); step++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
