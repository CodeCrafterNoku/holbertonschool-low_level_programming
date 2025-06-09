#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @letter: The character to check
 *
 * Return: 1 if character is a letter, otherwise 0
 */
int _isalpha(int letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		return (1);
	return (0);
}
