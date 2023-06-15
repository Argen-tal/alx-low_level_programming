#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array.
 * @grid: 2D grid.
 * @height: Height dimension of grid.
 *
 * Description: Frees the memory allocated for the grid.
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

