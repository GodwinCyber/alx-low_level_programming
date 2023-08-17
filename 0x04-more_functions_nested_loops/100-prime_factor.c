#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: (0)
 */

int main(void)
{
	long int a, b, c;

	b = 612852475143;

		for (a = 1; a <= b; a++)
		{
			if (b % a == 0)
			{
				if (a == b)
				{
					printf("%ld\n", b);
					break;
				}
				c = b / a;
				b = c;
			}
		}
	return (0);
}
