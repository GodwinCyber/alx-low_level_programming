#include "main.h"
#include <stdio.h>

/**
 * check_prime - helper function to check for prime using recursion
 * @n: The input number
 * @a: The current divisor to check
 *
 * Return: 1 if prime, 0 if not.
 */

int check_prime(int n, int a)
{
	if (a == n)
	{
		return (0);
	}
	if (n % a == 0)
	{
		return (1);
	}
	return (check_prime(n, a  + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: The input number
 *
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
