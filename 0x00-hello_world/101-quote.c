#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char m[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, m, sizeof(m) - 1);

	return (1);
}
