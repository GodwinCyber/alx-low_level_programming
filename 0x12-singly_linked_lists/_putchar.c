#include "main.h"

/**
 * _putchar - the character of the stdout
 * @c: stdout
 * Return: 0
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}
