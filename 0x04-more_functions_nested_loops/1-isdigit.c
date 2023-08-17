#include "main.h"

/**
 * int _isdigit - checks for a digit (0 through 9).
 * @c: Returns 1 if c is a digit
 * @c: Returns 0 otherwise
 * Return: c
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
