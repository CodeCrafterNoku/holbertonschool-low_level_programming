#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * Return: 1 if character is lowercase, otherwise return 0
 * @letter: is the variable to be checked for lowercase
 */

int _islower(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	else
		return (0);
}
