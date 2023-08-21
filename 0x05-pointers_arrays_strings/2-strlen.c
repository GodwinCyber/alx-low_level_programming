#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: count the string
 * Return: the string lenght
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
