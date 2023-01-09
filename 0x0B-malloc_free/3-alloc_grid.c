#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2d array of int
 * @width: the row of the array
 * @height: the column of the array
 * Return: the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	b = 0;
	a = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (a = 0; a < height; a++)
				free(grid[a]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
