#include "main.h"

/**
*free_grid - frees 2 dimensional grid
*@grid: array de rows and columns
*@height: number of columns of grid
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
