#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * Description: The function prints a string in reverse
 * @s: pointer to be used
 * Return: returns s or zero
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1):
		_putchar(*s);
	}
}
