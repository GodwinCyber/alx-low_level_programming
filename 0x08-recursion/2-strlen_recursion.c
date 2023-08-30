#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: th input strings
 *
 * Return: Print the lenght of the stringngs
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
