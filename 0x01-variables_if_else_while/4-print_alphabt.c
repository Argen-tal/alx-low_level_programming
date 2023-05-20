#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sm;
	sm = 'a';

	while (sm <= 'z')
	{
		if (sm != 'q' && sm != 'e')
		putchar(sm);
		sm++;
	}
	putchar('\n');

	return (0);
}
