#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
