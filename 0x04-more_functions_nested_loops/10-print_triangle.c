#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: print the parameter size as stdout
 * Return: if the size is the size of triangle,
 * print new line is the size is 0 or less
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
