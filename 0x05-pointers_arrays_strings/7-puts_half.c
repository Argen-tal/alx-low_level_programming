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
		_putchar(str[0]);
		_putchar('\n');
		return;
	}
	/* Calculate the starting index of the other half */
	if (*str % 2 == 0)
		st_index = (length / 2);
	else
		st_index = ((length + 1) / 2);
	/* Print the second half of the string */
	while (str[st_index] != '\0')
	{
		_putchar(str[st_index]);
		st_index++;
	}
	/* Print a new line */
	_putchar('\n');
	/* check if number of character is odd */
	if (str[length] % 2 != 0)
	{
	/* Calculate the number of character to be printed */
		int n =  ((length - 1) / 2);
	/* Print the last n character of the string */
	while (str[n] != '\0')
		{
		_putchar(str[n]);
		n++;
		}
	}

}
