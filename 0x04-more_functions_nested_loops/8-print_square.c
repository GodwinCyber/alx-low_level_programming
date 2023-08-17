#include "main.h"

/**
 * print_square - prints a square,
 * @size: the stdout
 * Return: size unless size is 0 or less print new line
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
