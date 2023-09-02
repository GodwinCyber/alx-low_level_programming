#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiple two numbers and
 * print the result of the multiplication
 * @argc: argunment count
 * @argv: argunment vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	int result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
