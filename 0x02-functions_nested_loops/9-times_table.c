#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always (Success)
 */

void times_table(void)
{
	int i;
	int j;
	int product;
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
				product = i * j;

			if (j == 0)
			{
				_putchar ('0');
			}
			else
			{
				if (product < 10)
				{
					_putchar (' ');
				}
				_putchar (product / 100 + '0');
				_putchar (product / 10 % 10 + '0');
				_putchar (product % 10 + '0');
			}

			if (j < 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
