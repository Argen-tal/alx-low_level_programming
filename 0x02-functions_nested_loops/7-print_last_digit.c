#include "main.h"
/**
 * print_last_digit - prints the last digit of any number.
 * @n: number to be checked.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int lastdigit;
	if (n < 0)
		n = -n;
	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit = -lastdigit;
	_putchar (lastdigit + '0');
	 return (lastdigit);
}
