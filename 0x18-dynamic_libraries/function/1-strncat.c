#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _strncat - concatenates two strings.
 * @dest: pointer to the destinat string
 * @src: pointer to the source string
 * @n: the maximu number to be appended to the source string
 * Return: pointer of the concatenates strings
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (result);
}
