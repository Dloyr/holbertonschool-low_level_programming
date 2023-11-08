#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array
 * of integers.
 * @width: width of the array
 * @height: height of the array
 * Return: NULL, or array of grid
 */

int **alloc_grid(int width, int height)
{
	int **grid, indexw, indexh;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (indexh = 0; indexh < height; indexh++)
	{
		grid[indexh] = malloc(sizeof(int) * width);
		if (grid[indexh] == NULL)
		{
			for (indexw = 0; indexw < height; indexw++)
			{
				free(grid[indexw]);
				free(grid);
			}
			return (NULL);
		}
	}
	for (indexh = 0; indexh < height; indexh++)
	{
		for (indexw = 0; indexw < height; indexw++)
		{
			grid[indexh][indexw] = 0;
		}
	}
	return (grid);
}
