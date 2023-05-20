#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int numbers;

	numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
