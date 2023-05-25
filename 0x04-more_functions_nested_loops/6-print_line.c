#include "main.h"
/**
 * print_line - Prints n numbers of '_'.
 * @n: number of lines.
 * Return: Null.
 */
void print_line(int n)
{
	char dash = ('_');
	int count = 0;

	while (count < n)
	{
		_putchar(dash);
		count++;
	if (n <= 0)
	_putchar('\n');
	}
	_putchar('\n');
}
