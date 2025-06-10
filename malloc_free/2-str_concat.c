#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates length of a string
 * @s: The string to measure
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len])
		len++;

	return (len);
}

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, i, j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
