#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new
 * line.
 * @str: string to be printed
 *
 */
#include <stdio.h>

void print_rev(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
		putchar(str[i]);

	putchar('\n');
}

