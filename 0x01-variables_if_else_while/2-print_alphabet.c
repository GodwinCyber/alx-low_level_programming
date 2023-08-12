#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the alphabetic
 * Retun: Always
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
