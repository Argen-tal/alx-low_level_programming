#include "main.h"
/**
 * _memset - Fills a memory with a constant byte.
 * @s: pointer to memory area.
 * @b: constant byte to fill.
 * @n: First bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr_s = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = (char)b;
	}
	return (ptr_s);
}
