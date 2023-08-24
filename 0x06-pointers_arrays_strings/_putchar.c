#include <unistd.h>

/**
 * _putchar - write character to the standard output, stdout
 * @c: charater to be written, write in the stdout.
 * @: character to be printed out: parameter
 * Return: Always success 1
 * Error: -1, set the error appropraite
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
