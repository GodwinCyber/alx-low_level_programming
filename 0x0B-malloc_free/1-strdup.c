#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in
 * memory that contains a copy of the string given as
 * a parameter
 * @str: input strings to be duplicated
 * Return: NULL if input string is NULL or if memory
 * allocation fails
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dupe_str = (char *)malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (dupe_str == NULL)
	{
		return (NULL);
	}
	strcpy(dupe_str, str);

	return (dupe_str);
}
