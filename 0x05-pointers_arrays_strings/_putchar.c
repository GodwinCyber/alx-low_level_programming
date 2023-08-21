#include <unistd.h>

/**
 * _putchar - write the character to the standard out stdout
 * @c: the charcater to be written, write c character to the stdout
 * @c: The character to be printed out:parameter
 * Return: Always (Success)
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
