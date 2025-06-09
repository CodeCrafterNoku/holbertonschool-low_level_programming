#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer converted from the string.
 */
int	_atoi(char *s)
{
	int	i = 0, sign = 1, result = 0, found_digit = 0;

	/* Process signs */
	while (s[i] && ((s[i] < '0' || s[i] > '9')))
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
			; /* Do nothing for + */
		else if (found_digit)
			break;
		i++;
	}

	/* Process digits */
	while (s[i] >= '0' && s[i] <= '9')
	{
		found_digit = 1;
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
