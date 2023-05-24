#include "main.h"
/**
 * times_table - time table 0 - 9
 */
void times_table(void)
{
	int l;
	int m;
	int n;

	for (l = 0; l < 10; l++)
	{
		for (m = 0; m < 10; m++)
		{
			n = l * m;
			if (m == 0)
				_putchar(n + '0');
			if (m != 0 && n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_puchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
