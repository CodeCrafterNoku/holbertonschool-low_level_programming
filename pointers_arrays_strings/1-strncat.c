#include "main.h"

/**
 * _strncat - concatenates two strings with a byte limit
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to append
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    /* Move to the end of the destination string */
    while (*ptr != '\0')
    {
        ptr++;
    }

    /* Append up to n bytes from the source string */
    while (*src != '\0' && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* Ensure the resulting string is null-terminated */
    *ptr = '\0';

    return (dest);
}
