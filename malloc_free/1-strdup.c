#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns pointer to newly allocated space containing string copy
 * @str: The string to duplicate
 *
 * Return: Pointer to duplicated string, or NULL if fails
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
