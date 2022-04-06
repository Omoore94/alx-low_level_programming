#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees up a 2d grid
 * @grid: double pointer 2d grid int
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
