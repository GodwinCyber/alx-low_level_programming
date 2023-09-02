#include "main.h"
#include <stdio.h>

/**
 * main - print all argunment its receives
 * @argc: argunment count
 * @argv: argunment vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
