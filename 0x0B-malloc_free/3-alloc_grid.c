#include "main.h"

/**
***alloc_grid - return a pointer to a 2 arrs(dimensional)
*@width:
*@height:
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	/* asignamos la memoria necesaria*/
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
