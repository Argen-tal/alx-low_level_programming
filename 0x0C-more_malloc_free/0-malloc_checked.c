#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of data type.
 *
 * Return: 98 for failed. pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr_malloc;

	ptr_malloc = malloc(b);

	if (ptr_malloc == NULL)
		exit(98);

	return (ptr_malloc);
}
