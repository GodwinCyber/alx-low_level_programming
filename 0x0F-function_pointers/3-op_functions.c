#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: integer
 * @b: integer
 * Return: returnthe sum of two number
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: integer
 * @b: integer
 * Return: return the the vale of two sub number.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer
 * @b: integer
 * Return: The product of two number
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - eturns the result of the division of a by b
 * @a: integer
 * @b: integer
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: integer
 * @b: integer
 * Return: the remainder of two divided number
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
