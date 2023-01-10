#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a program that frees memory of a grid allocated
 * memory with malloc
 * @grid: the grid we want to free its memory
 * @height: the rows of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
