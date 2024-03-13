#include "search_algos.h"

int _binary_recursive(int *array, size_t left, size_t right, int value);

/**
 * _binary_recursive - Recursively searches for a value
 * in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @left: The starting index of the subarray to search in
 * @right: The ending index of the subarray to search in
 * @value: The value to search for
 * Return: The index where value is located or -1 if value is not present
 */
int _binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = left + (right - left) / 2;
	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		else
			return (_binary_recursive(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (_binary_recursive(array, mid + 1, right, value));
	else
		return (_binary_recursive(array, left, mid - 1, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in.
 * @size:  number of elements in array.
 * @value: the value to search for.
 * Return: The index where value is located or -1 if value is not present.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (_binary_recursive(array, 0, size - 1, value));
}
