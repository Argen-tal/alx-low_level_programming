/**
 * print_array - prints n elements of an array of integers
 * followed by a new line.
 * @a: name of array
 * @n: number of nth elements
 *
 * Return: Nothing
 */
#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
	{
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

