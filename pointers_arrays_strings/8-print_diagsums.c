#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the matrix
 * @size: Size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;  /* Sum for the primary diagonal */
	int sum2 = 0;  /* Sum for the secondary diagonal */

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];          /* Primary diagonal */
		sum2 += a[i * size + (size - 1 - i)];  /* Secondary diagonal */
	}
	printf("%d, %d\n", sum1, sum2);
}
