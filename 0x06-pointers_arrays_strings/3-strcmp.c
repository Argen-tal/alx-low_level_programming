#include "main.h"
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
	int i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);

	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	
	return (0);

}
