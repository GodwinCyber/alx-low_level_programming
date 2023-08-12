#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print single digits number of base 10 start from 0
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');

	return (0);
}
