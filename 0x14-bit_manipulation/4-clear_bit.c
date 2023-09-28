#include "main.h"

/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
