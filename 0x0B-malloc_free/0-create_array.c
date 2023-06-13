#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a
 * specific char c.
 * @c: specific char to be initialized with array.
 * @size: size of array.
 *
 * Return: NULL or pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char* buffer;
	char *ptr_c;

	if (size <= 0)
	{
		return (NULL);
	}
	buffer = malloc(size * sizeof(size));
	if (buffer == NULL)
		return (NULL);

	ptr_c = buffer;

	for (i = 0; i < size; i++)
	{
		*buffer = c;

		buffer++;
	}
	return (ptr_c);
}
