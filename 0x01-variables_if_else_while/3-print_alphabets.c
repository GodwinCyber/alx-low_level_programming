#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alphabetic in uppercases and lowercases
 *
 * Return: Always (Sucess)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
