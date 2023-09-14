#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - that prints the opcodes of its own main function
 * @n: number of byte to print
 * Description: The function opcode of the main function and
 * take the number of byter to print the maain argument
 * Return:0
 */

void print_opcodes(int n)
{
	unsigned char *main_ptr = (unsigned char *)print_opcodes;
	int i;

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", main_ptr[i]);
			break;
		}
		printf("%02hhx ", main_ptr[i]);
	}
}

/**
 * main - the main entry of the program
 * @argc: the command line argument counter
 * @argv: array of command line string
 * Return: 0 on success, 1 for incorrect argument,
 * 2 for negative byte count
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (num_bytes < 21)
	{
		printf("Error\n");
		return (3);
	}
	print_opcodes(num_bytes);

	return (0);
}
