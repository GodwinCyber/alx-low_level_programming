#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: tye string
 * @s2: the second string
 * @n: the maximum number of byte from s2 to be concatenated
 * Return: The concatenated string or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);
	for (; i < len1; i++)
		concat[i] = s1[i];
	for (; j < n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
