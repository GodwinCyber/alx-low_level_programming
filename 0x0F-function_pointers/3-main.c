#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - drive function to perform any of
 * set number of operator integer.
 * @argc: argument counter.
 * @argv: an array of pointer to the string
 * that represent an argument.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	if (operation == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	result = operation(num1, num2);

	printf("%d\n", result);
	return (0);
}
