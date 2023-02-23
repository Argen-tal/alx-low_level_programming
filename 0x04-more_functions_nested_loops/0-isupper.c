#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                _putchar('1');
                return (1);
        }
        else
        {
                _putchar('0');
                return (0);
        }
}

