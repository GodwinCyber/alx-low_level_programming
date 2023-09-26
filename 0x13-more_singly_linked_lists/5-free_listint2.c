#include "lists.h"

/**
 * free_listint2 - free the listint_t list
 * @head: pointer to pointer to the head list
 * Return: set head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;

		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
