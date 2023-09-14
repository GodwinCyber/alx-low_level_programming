#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of the arguiment to be printed
 * Description: this function take format string and
 * a variable argument. It print the argument based on the
 * format specifier in the formart string
 * - 'c': for character
 * - 'i': for integer
 * - 'f': for float
 * - 's': for string
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				}
				default:
					i++;
					continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);

	printf("\n");
}
