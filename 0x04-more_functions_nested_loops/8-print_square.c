#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: size of the square.
 *
 * Return: void.
 */
void print_square(int size)
{
	int row = 0;
	int collum = 0;

	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}
	while (row < size)
	{
		collum = 0;

		while (collum < size)
		{
		_putchar('#');
		collum++;
		}
	_putchar ('\n');
	row++;
	}
}
