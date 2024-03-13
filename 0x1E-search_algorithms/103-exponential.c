#include "search_algos.h"

int _binary_search(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1
 * if value is not present or array is NULL.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (bound = 1; bound < size && array[bound] <= value; bound = bound * 2)
			printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
	}

	right = bound < size ? bound : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, right);
	return (_binary_search(array, bound / 2, right, value));
}

/**
 * _binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm within a range.
 * @array: A pointer to the first element of the array to search in.
 * @left: The first index of the range to search in.
 * @right: The last index of the range to search in.
 * @value: The value to search for.
 * Return: The first index where value is located, or -1
 * if value is not present.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
