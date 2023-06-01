#include "main.h"
#include <stddef.h>
/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: Second string.
 *
 * Return: 1 if s1 char is greater, -1 if s2 is greater, 0 if
 * equal.
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char c1, c2;
	int i = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	while (c1 != '\0' && c2 != '\0')
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 > c2)
			return (15);

		else if (c1 < c2)
			return (-15);
		i++;
	}
	return (0);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s2[i] == '\0')
		return (-15);
	else
		return (15);

}
