#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new li * ne.
 * @size: size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
int count = 0;
int n;

if (size <= 0)
_putchar('\n');
return;
while (count < size)
{
n = 0;
while (n <= count)
{
_putchar('#');
n++;
}
_putchar('\n');
count++;
}
}
