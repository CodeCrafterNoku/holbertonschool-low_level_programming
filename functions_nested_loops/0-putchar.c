#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0
 */
int main(void)
{
    char c[] = "_putchar\n";
    int i;

    for (i = 0; c[i] != '\0'; i++)
    {
        _putchar(c[i]);
    }

    return (0);
}
