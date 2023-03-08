/**
 * _puts_recursion - Entry point
 * Description: The function prints a string pointed by *s
 * @s: pointer
 * Return: s
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
