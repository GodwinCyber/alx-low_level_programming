#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character,
 * @str: string to printed
 * Return: 0
 */

void puts2(char *str)
{
	int index = 0;
	int i;

	while (str[index] != '\0')
	{
		index++;
	}
	for (i = 0; i < index; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
