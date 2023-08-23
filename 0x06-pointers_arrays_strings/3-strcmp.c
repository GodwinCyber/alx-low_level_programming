#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: if s1 < s2 result will be -ve, if s2 > s1 result will be +ve
 * if s1 == s1 result will be zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
