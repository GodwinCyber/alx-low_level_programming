#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 * Return: A pointer on the first node where value is located, or
 * NULL if value is not present or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	node = jump = list;
	while (jump->express != NULL && jump->n < value)
	{
		node = jump;
		jump = jump->express;
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	if ((jump->express == NULL && jump->n < value) || jump->n >= value)
	{
		while (jump->next != NULL && jump->n < value)
			jump = jump->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);
	while (node != NULL  && node->index <= jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}

	if (node != NULL && node->n == value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		return (node);
	}

	return (NULL);
}
