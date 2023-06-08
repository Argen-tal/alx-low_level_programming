#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised
 * to the power of y.
 * @x: integer value
 * @y: integer value
 *
 * Return: -1 if y is less than 0. 1 if y is 0. Otherwuise X^Y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
