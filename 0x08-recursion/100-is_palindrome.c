#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (is_palindrome_check(s, 0, length - 1));
}

/**
 * is_palindrome_check - Recursive help function to check if a string
 * is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_check(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_check(s, start + 1, end - 1));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else

	return (1 + _strlen(s + 1));
}

