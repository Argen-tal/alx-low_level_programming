#include "main.h"

/**
 * _isupper - checks case
 *
 * Description: The program checks for uppercase
 * @c: case to be checked.
 * Return: returns 1 if c is upper case, returns 0 if c is lower case.
 */

int _isupper(int c)
{
	int c = 'A'

	if (c >= 'A' && c <= 'Z')
	{
		_putchar('1');
		return('1');
	}
	else
	{
		_putchar('0');
		return(0);
	}
}

