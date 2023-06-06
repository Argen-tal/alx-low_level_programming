#include "main.h"

/**
 * _strspn - Returns the length of the initial segment of a string
 *           that consists only of bytes from a specific set.
 * @s: The string to be checked.
 * @accept: The set of bytes to be checked against.
 *
 * Return: The number of bytes in the initial segment of s that
 *         consist only of bytes from the accept set.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	unsigned int i;
	int found;

	while (*s != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			return (n);

		n++;
		s++;
	}

	return (n);
}

