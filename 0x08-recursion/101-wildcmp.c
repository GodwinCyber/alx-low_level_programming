#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if they
 * can be considered identical
 * @s1: The first input string
 * @s2: The second input string with special character *
 *
 * Return: 1 if identical, 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	return (wildcmp(s1 + 1, s2 + 1));
}
