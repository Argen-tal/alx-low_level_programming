#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j])
				j++;

			if (needle[j] == '\0')
				return (haystack + i);
		}
		i++;
	}

	return (NULL);
}

