#include <unistd.h>

/**
 * _putchar - write the character to the stdout
 * @c: the argunment parameter
 * Return: 0
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
