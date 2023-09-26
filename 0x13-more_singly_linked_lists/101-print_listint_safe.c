#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head node.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = NULL;
	const listint_t *compare = NULL;
	size_t count = 0;
	size_t currentIndex;

	current = head;
	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		compare = head;
		currentIndex = 0;
		while (currentIndex < count)
		{
			if (current == compare)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (count);
			}
			compare = compare->next;
			currentIndex++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
