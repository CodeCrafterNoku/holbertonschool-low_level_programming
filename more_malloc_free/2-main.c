#include <stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc and free
#include "main.h"

int main(void)
{
    int *array;
    unsigned int n = 5, size = sizeof(int);
    unsigned int i;

    array = _calloc(n, size);
    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Element %d: %d\n", i, array[i]);
    }

    free(array);
    return (0);
}
