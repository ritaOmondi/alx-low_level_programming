#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Function that frees 2D grid created in alloc_grid
 * @grid : 2D grid created
 * @height: height of the grid
 *
 * Retrun: nothing
 */
void free_grid(int **grid, int height)
{

	int a;

	for (a = 0; a < height; a++)
	{
	free(grid[a]);
	}
	free(grid);
}
