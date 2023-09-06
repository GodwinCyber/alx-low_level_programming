#include "main.h"

/**
 * strtow - Split a string into words
 * @str: The input string to be split
 * Return: A dynamically allocated array of strings (words)
 */

char **strtow(char *str)
{
	char *array = NULL;
	unsigned int i = 0, j = 0, a;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < i; a++)
		array[a] = str[a];
	i = a;
	for (a = 0; a < j; a++)
	{
		array[i] = str[a];
		i++;
	}
	array[i] = '\0';
	return (NULL);
}
