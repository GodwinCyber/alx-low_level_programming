#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the input number
 * Return: Return the factorial number, or -1 if n is -ve
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
