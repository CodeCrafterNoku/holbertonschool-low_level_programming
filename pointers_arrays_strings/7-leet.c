#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char numbers[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (str);
}
