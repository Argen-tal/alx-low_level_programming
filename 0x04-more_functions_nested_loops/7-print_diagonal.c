#include "main.h"
/**
 * print_diagonal - Displays n number of slant lines.
 *
 * @n: total line count
 *
 * Return: null.
 */
void print_diagonal(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('\\');
		count++;

	if (n < 0)
	_putchar('\n');
	}
	_putchar('\n');
}
