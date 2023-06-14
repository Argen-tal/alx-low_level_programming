#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 *
 * Return: A pointer to a new string which is a duplicate of str.
 */
char *_strdup(char *str)
{
	char *new_str;
	size_t len = 0;
	size_t i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}

