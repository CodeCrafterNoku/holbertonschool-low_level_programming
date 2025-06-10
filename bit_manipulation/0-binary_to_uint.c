#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 * - there is one or more chars in the string b that is not 0 or 1.
 * - b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0); /* Character is not '0' or '1' */
		}
		decimal_val <<= 1; /* Shift left to make space for the next bit */
		if (b[i] == '1')
		{
			decimal_val |= 1; /* Add 1 if the bit is '1' */
		}
		i++;
	}

	return (decimal_val);
}
