#include "main.h"

/**
 * _putchar - write the c character to the stdout
 * @c: the c character
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
