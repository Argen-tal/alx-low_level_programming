#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return prime_test(n, 2);
}

/**
 * prime_test - Recursive helper function to check primality.
 * @n: The number to be checked.
 * @divisor: The current divisor to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int prime_test(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return prime_test(n, divisor + 1);
}

