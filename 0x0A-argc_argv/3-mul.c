#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;
	int num;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		mul *= num;
	}
	printf("%d\n", mul);

	return (0);
}

