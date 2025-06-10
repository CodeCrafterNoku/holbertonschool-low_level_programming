#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to convert and print in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor;
	int bit_printed = 0; /* Flag to track if any '1' has been printed */
	int num_bits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Calculate the number of bits in unsigned long int */
	num_bits = sizeof(unsigned long int) * 8;
	/* Initialize divisor to the most significant bit possible */
	divisor = 1UL << (num_bits - 1);

	/* Find the most significant '1' bit to start printing from */
	while (divisor > 0)
	{
		if ((n & divisor) || bit_printed)
		{
			if (n & divisor)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
			bit_printed = 1; /* A '1' has been encountered, start printing zeros too */
		}
		divisor >>= 1; /* Shift divisor to the right */
	}
}
