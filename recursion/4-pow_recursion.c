#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: x raised to the power of y, or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)  /* Check for negative exponent */
	{
		return (-1);
	}
	if (y == 0)  /* Base case: any number to the power of 0 is 1 */
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));  /* Recursive call */
}
