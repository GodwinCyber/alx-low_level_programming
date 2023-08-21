#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: swap the stdout
 * @b: swap the stdout
 * Return: The value of the two integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
