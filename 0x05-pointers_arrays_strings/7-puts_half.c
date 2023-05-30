#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input string
 * Return: void
 */
void puts_half(char *str)
{
	int st_index = 0;
	int length = 0;
	int n;

	while (str[length] != '\0')
		length++;

	n = length / 2;

	if (length % 2 == 1)
		n = (length + 1) / 2;

	while (str[st_index] != '\0')
	{
		if (st_index >= n)
			_putchar(str[st_index]);
		st_index++;
	}

	_putchar('\n');
}

