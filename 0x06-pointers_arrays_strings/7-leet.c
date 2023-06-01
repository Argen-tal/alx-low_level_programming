#include "main.h"

/**
 * leet - Encodes into 1337speak.
 * @str: Input string.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	char replacements[] = "aAeEoOtTlL";
	char encoded[] = "4433007711";

	while (str[i])
	{
		int j = 0;
		while (j < 10)
		{
			if (str[i] == replacements[j])
			{
				str[i] = encoded[j];
				break;
			}
			j++;
		}
		i++;
	}

	return str;
}

