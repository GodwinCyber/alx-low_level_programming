Include "main.h"

/**
 * _putchar - the charater of the stdout
 * @c: the c character
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
