#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of arguments.
 * @...: Variable arguments to sum.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
