#include "main.h"
/**
 * _islower - checks for lower case letters.
 *@c: function to be checked.
 *
 * Return: 1, if c is lower case, 0 otherwise.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);

	return (0);
}
