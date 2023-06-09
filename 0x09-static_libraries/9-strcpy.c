#include "main.h"
#include <stddef.h>

/**
 * _strcpy - copies the string pointed to by src, including the
 *           terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: destination of the copied string.
 * @src: string source.
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr_dest = dest;

	if (dest == NULL)
		return (NULL);

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr_dest);
}

