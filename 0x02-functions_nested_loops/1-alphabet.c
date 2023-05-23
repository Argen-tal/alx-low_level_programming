#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always void (Success)
 */

void print_alphabet(void)
{
	char lowercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
