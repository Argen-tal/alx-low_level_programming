#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies argumebts
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i = 0;
	int num;

	if (argc <= 1)
	{
		printf("Error");

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
