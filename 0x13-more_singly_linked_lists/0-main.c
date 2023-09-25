#include "lists.h"

/***
 * main - check the code
 * Return: 0
 */

int main(void)
{
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Eror\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
