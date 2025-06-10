#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @a: Pointer to the array
 * @size: Size of the array
 */
void print_array(int *a, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");
}
