#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: The name of the person
 * @f: pointer to the formatting function
 * Description: Takes a name and a formatting function
 * as input.
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
