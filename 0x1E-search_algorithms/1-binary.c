#include "search_algos.h"

/**
 * binary_search - search for a value in array of integers
 * @array: Poniter to the first element of the array to search in
 * @size: The number of element in array
 * @value: The value to search for
 * Return: The index where value is located, or -1 if value is
 * not present or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
