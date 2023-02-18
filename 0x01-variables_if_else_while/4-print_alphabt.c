#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program writes letters a to z without e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
	}
		putchar('\n');

	return (0);
}

