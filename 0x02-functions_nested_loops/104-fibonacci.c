#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always (Success)
 */

int main(void)
{
	unsigned long int a1 = 0, b1 = 1, a2 = 0, b2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (count = 2; count < 98; count++)
	{
		if (b1 + b2 > LARGEST || a2 > 0 || a1 > 0)
		{
			hold1 = (b1 + b2) / LARGEST;
			hold2 = (b1 + b2) % LARGEST;
			hold3 = a1 + a2 + hold1;
			fr1 = a2, a2 = hold3;
			bk1 = b2, b2 = hold2;
			printf("%lu%010lu", a2, b2);
		}
		else
		{
			hold2 = b1 + b2;
			bk1 = b2, b2 = hold2;
			printf("%lu", b2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

