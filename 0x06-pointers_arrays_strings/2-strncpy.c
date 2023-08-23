#include "main.h"

/**
 * _strncpy - copies a string up to n character
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximun number of charcater to br copied from src
 * Return: pointer rrsulting from the copied result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
