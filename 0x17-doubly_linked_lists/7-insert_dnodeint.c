#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value to assign to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (new == NULL)
		return (NULL);

	new->n = n;
	while (idx > 1 && node != NULL)
	{
		node = node->next;
		idx--;
	}

	if (node != NULL)
	{
		new->prev = node;
		new->next = node->next;

		if (node->next != NULL)
			node->next->prev = new;

		node->next = new;

		return (new);
	}

	free(new);
	return (NULL);
}
