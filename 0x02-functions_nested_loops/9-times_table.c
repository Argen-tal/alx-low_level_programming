#include "main.h"
/**
 * times_table - Multiplication tables from 0 - 9
 * 
 * Return: null
 */
void times_table(void)
{
	while (i <= 0)
	{
		while (j <= 9)
    		{
			int product = i * j;
        		_putchar(product);
        		j++;
    		}
    			_putchar('\n');
			i++;
	}
}
