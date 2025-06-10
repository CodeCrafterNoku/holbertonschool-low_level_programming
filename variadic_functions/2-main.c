#include "variadic_functions.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings("; ", 3, "Hello", NULL, "World");
    print_strings(NULL, 2, "No", "separator");
    return (0);
}
