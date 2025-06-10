#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip
 * to get from one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	/* XORing n and m gives a number where each 1-bit indicates a difference */
	xor_result = n ^ m;

	/* Count the number of set bits (1s) in the xor_result */
	while (xor_result > 0)
	{
		/* If the least significant bit is 1, increment count */
		if (xor_result & 1)
		{
			count++;
		}
		xor_result >>= 1; /* Right shift to check the next bit */
	}

	return (count);
}
