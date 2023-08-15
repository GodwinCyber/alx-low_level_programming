#include "main.h"

/**
 * _isalpha -  checks for alphabetic character.
 * @c: The expected stdout charcacter
 * Return: Success 1
 * On error: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
