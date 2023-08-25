#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer parameter
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + i);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds two numbers.
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: Pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, d = 0;
	int a1 = 0, a2 = 0, templ = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			a1 = 0;
		else
			a1 = *(n1 + i) - '0';
		if (j < 0)
			a2 = 0;
		else
			a2 = *(n2 + j) - '0';
		templ = a1 + a2 + overflow;
		if (templ >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (templ % 10) + '0';
		d++;
		j--;
		i--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
