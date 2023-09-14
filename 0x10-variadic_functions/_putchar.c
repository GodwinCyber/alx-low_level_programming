#include "variadic_functions.h"

/**
 * _putchar - Print the character of stdout
 * @c: the accepted parameter
 * Return: 0
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
