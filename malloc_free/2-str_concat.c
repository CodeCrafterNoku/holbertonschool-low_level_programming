#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to a newly allocated space in memory
 * containing the concatenated strings, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    unsigned int len1 = 0, len2 = 0, i;

    /* Handle NULL inputs */
    if (s1 != NULL)
    {
        while (s1[len1])
            len1++;
    }
    
    if (s2 != NULL)
    {
        while (s2[len2])
            len2++;
    }

    /* Allocate memory for the concatenated string */
    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
        return (NULL);
    
    /* Copy s1 to result */
    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    /* Copy s2 to result */
    for (i = 0; i < len2; i++)
        result[len1 + i] = s2[i];

    /* Null terminate the concatenated string */
    result[len1 + len2] = '\0';

    return (result);
}
