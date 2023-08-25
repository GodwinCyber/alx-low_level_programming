#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print the content of a buufer in a specific format
 * @b: Pointer to the buffer to be printed
 * @size: size of the buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, a;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		j = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + a + i));
			else
				printf("  ");

			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int z = *(b + a + i);

			if (z < 32 || z > 132)
			{
				z = '.';
			}
			printf("%c", z);
		}
		printf("\n");
		a += 10;
	}
}
