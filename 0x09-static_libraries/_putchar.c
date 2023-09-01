#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * _putchar - Write the character to the standard out srdout
 * @c: The charcater to be writen, write the c character to the stdout
 * @c: The character to be printed out; parameter
 *
 * Return: On Sucess 1
 * On error: -1 and set the error appropriate
 */

int _putchar(char c)
{
	return write (1, &c, 1);
}
