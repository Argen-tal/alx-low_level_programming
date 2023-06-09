#include "main.h"
#include <stddef.h>
/**
 * _strncpy - copies a string.
 * @dest: string destination.
 * @src: source of copied string.
 * @n: max number of string
 *
 * Return: ptr_dest (pointer to dest).
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr_dest = dest;

	if (src == NULL)
		return (NULL);

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (ptr_dest);
}
