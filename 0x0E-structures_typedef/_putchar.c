#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - write the charcater of the stdout
 * @c: the stdout
 * Return: 0
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
