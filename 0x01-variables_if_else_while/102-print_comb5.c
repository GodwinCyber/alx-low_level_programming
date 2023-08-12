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
	int a = 0;
	int b = 0;
	
	while (a < 100)
	{
		while (b < 100)
		{
			if (a != b)
			{
				putchar ((a / 10) + '0');
                                putchar ((a % 10) + '0');
                                putchar (' ');
                                putchar ((b / 10) + '0');
                                putchar ((b % 10) + '0');

				if (a != 98 || b != 99)
				{
					putchar (',');
                                        putchar (' ');
				}
			}
			b++;
		}
		a++;
		b = a;
	}
	putchar ('\n');

	return (0);
}
