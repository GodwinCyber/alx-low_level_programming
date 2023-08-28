#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - locate the character strings in memory
 * @s: pointer to the string to be searched.
 * @c: the charater to be locatd
 *
 * Return: A pointer to the first occurrence of the
 * character @c in the string @s,or NULL if the character
 * is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
