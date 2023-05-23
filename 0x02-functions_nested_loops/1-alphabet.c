#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;

	lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
	return (0);
}
