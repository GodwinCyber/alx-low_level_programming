#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (a <= b)
			{
				putchar ((a / 10) + '0');
				putchar ((a % 10) + '0');
				putchar (' ');
				putchar ((b / 10) + '0');
				putchar ((b % 10) + '0');

				if (a != 99 || b != 99)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
