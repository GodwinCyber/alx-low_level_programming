#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argunment counter
 * @argv: argunment vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
