#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet at reverse
 *
 * Return: Always (Success)
 */

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
