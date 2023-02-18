#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The program writes base ten without decimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
		putchar('\n');

	return (0);
}
