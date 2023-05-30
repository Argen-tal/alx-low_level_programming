#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to be printed.
 * @st_index - starting index.
 *
 * Return: null
 */
void puts_half(char *str)
{
	int length = 0;
	int st_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;
	/* Check if the length meets the requirments */
	if (length <= 1)
	{
		_putchar('\n');
	}
	/* Calculate the starting index of the other half */
	if (str[length] % 2 == 0)
		st_index = length / 2;
	else
		st_index = (length - 1) / 2;
	/* Print the second half of the string */
	while (str[st_index] != '\0')
	{
		_putchar(str[st_index]);
		st_index++;
	}
	/* Print a new line */
	_putchar('\n');
}

