#include <unistd.h>

/**
 * _putchar - write character to the stdout
 * @c: charcter to be written in c stdout
 * @c:the c parameter
 * Return: 0
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
