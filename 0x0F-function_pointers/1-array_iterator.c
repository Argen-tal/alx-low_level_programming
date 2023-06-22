#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an
 * array.
 * @size: size of array.
 * @array: array holding functions.
 * @action: pointer to functions.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
