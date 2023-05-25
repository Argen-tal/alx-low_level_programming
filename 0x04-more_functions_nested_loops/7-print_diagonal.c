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
	char space = 0;

	while (count < n)
	{
		space = count;
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		_putchar('\\');
		_putchar('\n');
		count++;

	if (n <= 0)
	_putchar('\n');
	}
	_putchar('\n');
}
