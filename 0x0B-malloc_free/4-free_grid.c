#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2-D grid of integers
 * @grid: 2-D grid to be freed
 * @height: height of grid
 * Return: Nothing
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
