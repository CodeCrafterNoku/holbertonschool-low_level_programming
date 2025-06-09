#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
* @n: the number of times the character \ should be printed
*
* Return: void
*/
void print_diagonal(int n)
{
int i, j; /* Declare variables at start for C89 */

if (n <= 0)
{
_putchar('\n');  /* Print new line if n is 0 or less */
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');  /* Print spaces for indentation */
}
_putchar('\\');  /* Print the backslash */
_putchar('\n');  /* End with a new line */
}
}
}
