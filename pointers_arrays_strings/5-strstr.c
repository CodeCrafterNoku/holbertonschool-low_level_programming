#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
