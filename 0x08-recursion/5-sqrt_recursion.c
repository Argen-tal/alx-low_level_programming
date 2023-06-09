#include "main.h"

/**
 * base - Function that returns the square root
 *        to the power of y.
 * @n: Integer value.
 * @j: Integer value.
 *
 * Return: -1 if y is less than 0. 1 if y is 0. Otherwise X^Y.
 */
int base(int n, int j)
{
	if ((j * j) == n)
	{
		return (j);
	}
	else if ((j * j) > n)
	{
		return (-1);
	}
	else
	{
		return (base(n, j + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to find the square root of.
 *
 * Return: Square root of n, or -1 if it does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (base(n, 1));
}

