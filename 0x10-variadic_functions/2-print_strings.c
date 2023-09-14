#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str != NULL)
			printf("%s", str);

		if (separator != NULL && i < n - 1 && str != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);

	printf("\n");
}
