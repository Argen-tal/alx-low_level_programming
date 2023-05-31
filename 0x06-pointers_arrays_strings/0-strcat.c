#include "main.h"
#include <stddef.h>
/**
 * _strcat - concatenates two strings.
 * @dest: destination for string src.
 * @src: string to be appended.
 *
 * Return: dest_start (pointer to dest string)
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	if (src == NULL)
		return (NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = ('\0');

	return (dest_start);
}
