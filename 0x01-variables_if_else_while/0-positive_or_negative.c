#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print "the n different valu each the the programme is run"
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() % RAND_MAX;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
