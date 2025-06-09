#include "main.h"

/**
* more_numbers - prints the numbers from 0 to 14, ten times
*
* Return: void
*/
void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)  /* Repeat 10 times */
{
for (i = 0; i <= 14; i++)  /* Print numbers from 0 to 14 */
{
if (i >= 10)
{
_putchar('1');  /* Print the tens place for numbers 10-14 */
}
_putchar((i % 10) + '0');  /* Print the units place */
}
_putchar('\n');  /* New line after each set */
}
}
