#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2-D array created by alloc_grid
 * @grid: grid created by alloc_grid
 * @height: height of grid
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
