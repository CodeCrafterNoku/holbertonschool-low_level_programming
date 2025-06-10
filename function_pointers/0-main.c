#include <stdio.h>
#include "function_pointers.h"

/* Example function to use with print_name */
void hello(char *name)
{
    printf("Hello, %s!\n", name);
}

int main(void)
{
    print_name("Alice", hello);
    return 0;
}
