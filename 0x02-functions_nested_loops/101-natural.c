#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (Success)
 */

int main(void)
{
	int a = 1024;
	int b = 0;
	int i;

	for (i = 0; i < a; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("The sum of all multiple 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
