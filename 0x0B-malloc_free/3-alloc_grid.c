#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x = 0, y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	while (x < height)
	{
		grid[x] = malloc(sizeof(int) * width);

		if (grid[x] == NULL)
		{
			while (x >= 0)
			{
				free(grid[x]);
				x--;
			}
			free(grid);
			return (NULL);
		}
		x++;
	}
	x = 0;
	while (x < height)
	{
		y = 0;
		while (y < width)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}

	return (grid);
}

