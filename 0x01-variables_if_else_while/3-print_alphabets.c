#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sm;
	char cp;

	sm = 'a';
	cp = 'A';
	while (sm <= 'z')
	{
		putchar(sm);
		sm++;
	}
	while (cp <= 'Z')
	{
		putchar(cp);
		cp++;
	}
	putchar('\n');

	return (0);
}
