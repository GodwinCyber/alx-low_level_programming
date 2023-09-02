#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: argunment count
 * @argv: argunment vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int num_total_coins = 0;
	int i;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < num_coins; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			num_total_coins++;
		}
	}
	printf("%d\n", num_total_coins);
	return (0);
}
