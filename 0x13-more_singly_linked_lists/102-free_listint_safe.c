#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head node.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp;
	size_t count = 0;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
		count++;
		if (temp <= current)
			break;
	}

	*h = NULL;
	return (count);
}
