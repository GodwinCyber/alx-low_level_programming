#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: stdout count
 * Return: The string value
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
