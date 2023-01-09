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
	grid = malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < width; a++)
	{
		grid[a] = malloc(sizeof(int) * height);
		if (grid[a] == NULL)
		{
			return (NULL);
			free(grid);
			free(grid[a]);
		}
		for (b = 0; b < height; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
