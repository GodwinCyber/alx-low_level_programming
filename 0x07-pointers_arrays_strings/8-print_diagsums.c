#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to the matrix
 * @size: size of the matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size * size)
	{
		sum1 += a[i];
		sum2 += a[(i / size) * size + (size - 1 - i % size)];
		i += size + 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
