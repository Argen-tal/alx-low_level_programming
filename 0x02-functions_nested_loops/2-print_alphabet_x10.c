#include "main.h"
/**
 * print_alphabet_x10 - Entry point, prints lowercase x10
 *
 * Return: Null
 */
void print_alphabet_x10(void)
{
	int lowercase = 97;
	int i = 0;

	while (i < 10)
	{

		while (lowercase <= 122)
		{
		_putchar(lowercase);

		lowercase++;
		}
	lowercase = 97;
	_putchar('\n');

	i++;
	}
}
