#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte
 * @dest: point to the destination buffer
 * @src: point to the src string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}
