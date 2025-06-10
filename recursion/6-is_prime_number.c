#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The number to check
 * @div: The divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (n < 2)  /* Check for numbers less than 2 */
	{
		return (0);
	}
	if (div * div > n)  /* No need to check beyond the square root of n */
	{
		return (1);
	}
	if (n % div == 0)  /* If divisible, it's not prime */
	{
		return (0);
	}
	return (is_prime_helper(n, div + 1));  /* Increment divisor */
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));  /* Start checking from 2 */
}
