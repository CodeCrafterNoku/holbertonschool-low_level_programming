#include <stdio.h>
#include "main.h"

int main(void)
{
    int *array;
    unsigned int n = 5, size = sizeof(int);

    array = _calloc(n, size);
    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (unsigned int i = 0; i < n; i++)
    {
        printf("Element %d: %d\n", i, array[i]);
    }

    free(array);
    return (0);
}
