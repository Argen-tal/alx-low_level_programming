#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: given integer.
 *
 * Return: -1 if n is less than 0. 1 if n is equivalent to zero
 * factorial of n otherwise.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

