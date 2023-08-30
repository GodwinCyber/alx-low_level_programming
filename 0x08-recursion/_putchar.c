#include <unistd.h>

/**
 * _putchar - write the character to the stdout
 * @c: stdout
 * @c: parameter
 * Return: Always Success
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
