#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters.
 * @n: The number of the argument
 * Return: The sum of all the aprameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	int x = 0;
	int sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		sum += x;
	}
	va_end(arg);
	return (sum);
}
