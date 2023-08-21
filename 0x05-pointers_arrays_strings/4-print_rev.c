#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: The string to pront
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\n')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
