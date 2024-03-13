#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 * Return: A pointer to the first node where value is located, or
 * NULL if value is not present or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i = 0;
	listint_t *node = list, *prev = NULL;

	if (!list)
		return (NULL);

	/** Jumping in steps of 'step' size */
	while (node->index < size && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		prev = node;
		for (i = 0; node && i < step; i++)
			node = node->next;
		if (!node)
			return (NULL);
	}

	/** Linear search in the block */
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev ? prev->index : 0, node->index);
	node = prev; /** Set node to the beginning of the block */
	while (node && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	if (node && node->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		return (node);
	}

	return (NULL);
}
