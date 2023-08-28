#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: Address of the pointer to be updated
 * @to: pointer to the new value
 * Return: the pointer to the pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
