#include "lists.h"

/**
 * pop_listint - deletes the head
 * node of a listint_t linked list
 * @head: pointer to pointer to the head list
 * Return: the head node’s data (n),
 * if the linked list is empty return 0
 */


int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;

	free(*head);

	*head = temp;

	return (data);
}
