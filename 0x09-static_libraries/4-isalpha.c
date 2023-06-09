#include "main.h"
/**
 * _isalpha - this function checks for alphabetic characters.
 * @c: the character to be checked.
 *
 * Return: 1, if the character is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);

	return (0);
}
