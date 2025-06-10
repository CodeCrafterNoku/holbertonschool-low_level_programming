#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int first = 1; /* Flag to check if it's the first argument */
    char *str;

    va_start(args, format);

    for (int i = 0; format && format[i]; i++)
    {
        if (!first)
        {
            printf(", ");
        }
        first = 0; /* Set to false after the first argument */

        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                printf("%s", str ? str : "(nil)");
                break;
        }
    }

    va_end(args);
    printf("\n");
}
