#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program writes letters a to z
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

	return (0);
}

