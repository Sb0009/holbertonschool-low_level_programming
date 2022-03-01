#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - entry point
 * @grid: grids
 * @height: rows
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
