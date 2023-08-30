#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i)

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the input number
 * Return: return the natural root number, or -1 if there is no
 * natural root number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * _sqrt - recurse to find the root square root of the number
 * @n: the input that will calculate the square root
 * @i: iterator
 * Return: the sqaure
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
