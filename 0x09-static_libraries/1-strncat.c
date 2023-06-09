#include "main.h"
#include <stddef.h>
/**
 * _strncat - appends the src string to the dest string.
 * overwriting the terminating null byte (\0)
 * at the end of dest
 * and then adds a terminating null byte.
 * @dest: pointer to the appendage location.
 * @src: pointer to string to be appended.
 * @n: total bytes to be used from src.
 *
 * Return: ptr_dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr_dest = dest;

	if (src == NULL)
		return (NULL);
	while (*dest != '\0')
		dest++;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';

	return (ptr_dest);
}
