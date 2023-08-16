#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  *
  * Return: 0!
  */
int main(void)
{
	int i = 0;
	long n = 1, m = 2, sum = m;

	while (m + n < 4000000)
	{
		m += n;

		if (m % 2 == 0)
			sum += m;

		n = m - n;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
