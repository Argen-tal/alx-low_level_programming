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
	char space;

	if (n < 0)
	{
		_putchar('\n');
	return;
	}
	while (count < n)
	{
		space = 1;
		while (space <= count)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
	}
}
