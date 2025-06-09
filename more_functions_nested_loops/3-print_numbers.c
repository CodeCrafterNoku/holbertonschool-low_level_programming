#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
    int i; /* Declare the variable outside the loop */
    
    for (i = 0; i <= 9; i++)
    {
        _putchar(i + '0'); /* Convert integer to character */
    }
    _putchar('\n'); /* Print new line */
}
