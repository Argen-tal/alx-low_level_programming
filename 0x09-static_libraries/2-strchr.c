#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be checked.
 * @c: charater search.
 *
 * Return: Pointer to c if the character is found. NULL otherwise.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)

			return (s);
		s++;
	}
	if (*s == c)
		return (s);

	return (NULL);
}
