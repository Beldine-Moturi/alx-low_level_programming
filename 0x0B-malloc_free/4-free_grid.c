#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees a 2D grid previously created by our alloc_grid function
 *@grid: pointer to the 2D grid created
 *@height: height of the grid
 *
 *Return: void - has no return value
 *
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
