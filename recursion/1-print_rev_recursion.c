#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)  /* Base case: check if the string is not empty */
	{
		_print_rev_recursion(s + 1);  /* Recursive call with the next character */
		_putchar(*s);  /* Print the current character after the recursive call */
	}
}
