#include "main.h"

/**
 * sqrt_helper - Helper function to find the square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root or -1 if not found
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)  /* If guess squared is greater than n */
	{
		return (-1);
	}
	if (guess * guess == n)  /* If guess squared is equal to n */
	{
		return (guess);
	}
	return (sqrt_helper(n, guess + 1));  /* Increment guess */
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)  /* Check for negative input */
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));  /* Start guessing from 0 */
}
