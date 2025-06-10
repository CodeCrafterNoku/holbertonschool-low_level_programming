#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    char *dup;
    int i;

    if (str == NULL)  /* Check for NULL input */
    {
        return (NULL);
    }

    /* Calculate the length of the string without using strlen */
    for (i = 0; str[i] != '\0'; i++)
        ;

    dup = malloc((i + 1) * sizeof(char));  /* Allocate memory for the duplicate */
    if (dup == NULL)  /* Check if allocation failed */
    {
        return (NULL);
    }

    for (i = 0; str[i] != '\0'; i++)  /* Copy the string */
    {
        dup[i] = str[i];
    }
    dup[i] = '\0';  /* Null-terminate the duplicated string */

    return (dup);
}
