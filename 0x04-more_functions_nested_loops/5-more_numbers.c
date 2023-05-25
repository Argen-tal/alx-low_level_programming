#include "main.h"
/**
 * more_numbers - prints 10x the numbers, from 0 to 14
 * followed by a new line.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int count = 0;
	char c = 0;

	while (count <= 10)
	{
		while (c <= 14)
		{

			if (c > 9)
			_putchar((c / 10) + '0');

		_putchar((c % 10) + '0');
		c++;
		}
	c = (0);
	_putchar('\n');
	count++;
	}
}
