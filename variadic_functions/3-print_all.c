#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format specifiers
 * @format: List of type specifiers (c, i, f, s)
 *
 * Description: Prints arguments based on format string.
 *              c: char, i: integer, f: float, s: string
 *              Strings print (nil) if NULL
 *              Ignores unknown specifiers
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *str;
	const char *sep = "";
	int printed = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				printed = 1;
				break;
			default:
				i++;
				j++;
				continue;
		}
		if (printed)
			sep = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
