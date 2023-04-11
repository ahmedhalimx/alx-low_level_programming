#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees allocated the grid array created by alloc_grid
 * @grid: 2d grid array
 * @height: height  of grid
 * Return: (void)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

