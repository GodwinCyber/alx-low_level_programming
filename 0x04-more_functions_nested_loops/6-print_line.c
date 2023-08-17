#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the parameter, the number of time
 * Return: n if n is 0 or less
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = '0'; i < 'n'; i++)
		{
			_putchar (95);
		}
		_putchar('\n');
	}
}
