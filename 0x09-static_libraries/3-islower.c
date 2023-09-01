#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  _islower - checks for lowercase character
 * @c: the charafter stdout; parameter
 * Return: Success 1
 * On error: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
