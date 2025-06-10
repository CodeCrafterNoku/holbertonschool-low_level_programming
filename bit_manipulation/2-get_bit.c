#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number.
 * @index: The index of the bit to get (starting from 0).
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out of bounds for an unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /* Error: index out of bounds */
	}

	/* Right-shift n by index positions to move the desired bit to the LSB, */
	/* then bitwise AND with 1 to get its value (0 or 1). */
	return ((n >> index) & 1);
}
