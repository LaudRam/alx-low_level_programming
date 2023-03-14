#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 * @width: size of array row
 * @height: size of array column
 * Return: 2-D pointer array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);

			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)

			grid[i][j] = 0;
	}
	return (grid);
}
