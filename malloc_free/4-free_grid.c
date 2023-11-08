#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: pointer to the previous function
 * @height: value of the of grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
