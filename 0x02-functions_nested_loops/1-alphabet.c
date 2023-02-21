#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Description: The program writes letter a to z in lowercase
 *
 * Return: Always 0 (Success)
 */

int print_alphabet (void);

{
	int ch;

	for (ch = 'a'; ch >= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
