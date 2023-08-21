#include "main.h"

/**
 * puts_half - prints half of a string,
 * @str: calculate the length of the string
 * Return: The half of the string
 */

void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}
	start_index = (length + 1) / 2;

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
