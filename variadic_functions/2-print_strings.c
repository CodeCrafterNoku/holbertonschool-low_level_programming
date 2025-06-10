#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a given string
 * @separator: The string to print between strings (can be NULL)
 * @n: The number of strings to print
 * @...: The strings to print
 *
 * Description: Prints strings separated by separator.
 *              If separator is NULL, it's not printed.
 *              If a string is NULL, prints (nil) instead.
 *              Always prints a new line at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}
