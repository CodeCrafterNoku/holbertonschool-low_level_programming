#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)  /* Base case: check if the string is not empty */
	{
		_putchar(*s);  /* Print the current character */
		_puts_recursion(s + 1);  /* Recursive call with the next character */
	}
	else
	{
		_putchar('\n');  /* Print a new line at the end */
	}
}
