#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long int number.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds for an unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /* Error: index out of bounds */
	}

	/* Create a mask with all bits set to 1 except the bit at 'index', */
	/* which is set to 0. Then, bitwise AND with *n to clear the bit. */
	*n &= ~(1UL << index);

	return (1); /* Success */
}
