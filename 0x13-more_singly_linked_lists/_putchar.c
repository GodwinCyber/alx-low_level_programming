#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character
 * Return: 0
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
