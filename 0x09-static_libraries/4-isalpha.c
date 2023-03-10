#include "main.h"

/**
 * _isalpha - Entry point
 *
 * _isalpha: checks the alphabets
 *
 * Return: returns (1) for lower case returns (0) for upper case
 *
 * @c: Letters a to z in lowee and upper case)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

