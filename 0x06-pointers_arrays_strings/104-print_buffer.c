#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print the content of a buufer in a specific format
 * @b: Pointer to the buffer to be printed
 * @size: size of the buffer
 * Return: the buffer
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%80x: ", i);
		{

			if (i + j < size)
				printf("%02x", (unsigned char) b[i + j]);
			else
				printf(" ");

			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint((unsigned char)b[i + j]))
					printf("%c", b[i + j]);
				else
					printf(",");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
