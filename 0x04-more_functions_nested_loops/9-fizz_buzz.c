#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * Return:  multiples of three print Fizz,
 * and then  multiples of five print Buzz instaed
 * of number, for the multiple of both three and five,
 * print FizzBuzz
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
