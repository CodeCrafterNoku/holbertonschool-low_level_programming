#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit_found = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			if (result > (INT_MAX / 10) ||
			    (result == (INT_MAX / 10) && (*s - '0') > (INT_MAX % 10)))
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		else if (digit_found)
			break;
		s++;
	}

	return ((digit_found) ? sign * result : 0);
}
