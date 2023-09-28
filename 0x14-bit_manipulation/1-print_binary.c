#include "main.h"

/**
 * print_binary - prints the binary
 * epresentation of a number.
 * @n: the number to be converted and prinyted
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
