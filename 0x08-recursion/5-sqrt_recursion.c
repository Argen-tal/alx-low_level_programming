#include "main.h"

/**
 *_sqrt_recursion - Entry point
 *Description: returns the natural square root of a number.
 *@n: number to return
 *Return: If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (sqrt_recursion(n, 0));
}
