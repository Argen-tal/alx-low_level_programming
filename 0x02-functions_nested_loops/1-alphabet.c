#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * print_alphabet: The function prints letters
 *
 * Description: writes letter a to z in lowercase
 *
 **/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
