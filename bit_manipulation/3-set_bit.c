#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long int number.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is out of bounds for an unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1); /* Error: index out of bounds */
	}

	/* Use bitwise OR to set the bit at the specified index to 1 */
	*n |= (1UL << index);

	return (1); /* Success */
}
