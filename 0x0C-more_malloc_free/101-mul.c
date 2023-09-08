#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - check if a string contains only positive numbers
 * @str: the input string
 * Return: Return 0 if a non-digit character is found
 */

int is_positive_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
		return (0);
		}
		str++;
	}
	return (1);
}

/**
 * multiply - multiply two positive numbers represented as strings
 * @num1: string one
 * @num2: second string
 * Return: 0
 */

void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	int *result, i, j, start;
	int mul, sum;

	while (num1[len1])
	{
		len1++;
	}
	while (num2[len2])
	{
		len2++;
	}
	result = (int *)calloc(len1 + len2, sizeof(int));
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	start = 0;
	while (start < len1 + len2 - 1 && result[start] == 0)
	{
		start++;
	}
	for (i = start; i < len1 + len2; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}

/**
 * main - Check if the correct number of arguments is provided and if
 * they are positive numbers
 * @argv: Array of strings, where each element is a command-line argument
 * @argc:Argument count, representing the number of command-line arguments
 * Return: Return 98 to indicate an error
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);
	return (0);
}
