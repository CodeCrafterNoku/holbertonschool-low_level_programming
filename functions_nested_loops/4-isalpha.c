#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * Return: 1 if character is a letter, otherwise return 0
 * @letter: is the variable to be checked for alphabetic character
 */
int _isalpha(int letter)
{
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
        return (1);
    else
        return (0);
}
