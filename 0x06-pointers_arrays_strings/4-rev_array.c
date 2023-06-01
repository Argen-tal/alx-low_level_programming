#include "main.h"
/**
 * reverse_array - reverse an array.
 * @a: array to be reversed.
 * @n: number of elements.
 * .
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;

	start++;
	end--;
	}
}

