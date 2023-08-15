#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the expected stdout
 * Return: -n if n id -ve and n if n is non -ve
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
