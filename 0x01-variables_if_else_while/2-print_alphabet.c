#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program writes letters a to z, followed by a null character
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }

        putchar('\0');

        return (0);
}

