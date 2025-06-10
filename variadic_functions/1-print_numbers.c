#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator
 * @separator: String to print between numbers (can be NULL)
 * @n: Number of integers passed to the function
 * @...: Variable number of integers to print
 *
 * Description: Prints all numbers separated by the given string.
 *              If separator is NULL, it's not printed.
 *              Always prints a new line at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(nums);

	printf("\n");
}
