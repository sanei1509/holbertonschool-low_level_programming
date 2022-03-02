#include "main.h"

/**
***alloc_grid - return a pointer to a 2 arrs(dimensional)
*@width: ancho de la grilla
*@height: alto de la grilla
*Return: a pointer to a two of two arrays
*/

int **alloc_grid(int width, int height)
{
	int **arr_arr;
	int i, j;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	/* asignamos la memoria necesaria*/
	arr_arr = malloc(height * sizeof(int *));

	if (arr_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_arr[i] = malloc(width * sizeof(int));
		if (arr_arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr_arr[i]);
			free(arr_arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr_arr[i][j] = 0;
	}

	return (arr_arr);
}
