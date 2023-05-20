#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexanum;
	char hexalpha;

	hexanum = '0';
	hexalpha = 'a';

	while (hexanum <= '9')
	{
		putchar (hexanum);
		hexanum++;
	}
	while (hexalpha <= 'f')
	{
		putchar (hexalpha);
		hexalpha++;
	}
	putchar('\n');
	return (0);
}
