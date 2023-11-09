#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 * @head: pointer to the pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = node->next;
		if (node->next != NULL)
		{
			node->next->prev = NULL;
		}
		free(node);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (node == NULL)
		{
			return (-1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		return (-1);
	}
	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	free(node);
	return (1);
}
