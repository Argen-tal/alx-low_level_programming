#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */


int largest_number(int a, int b, int c)
{
	int largest;

	if (c > a && c > b)
	{
	 	largest = c;
	}
	else if (a > b && a > b)
	{
		largest = a;
	}
	else if (b > c && b > a)
	{
		largest = b;
	}

	return (largest);
}

