#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: Returns 1 if c is uppercase
 * @c: Returns 0 otherwise
 * Return: c
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
