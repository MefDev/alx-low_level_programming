#include "main.h"

/**
 * free_grid - return a pointer to a 2 dimensional array of integers
 *@grid: 2D array
 *@height: the rows of the array
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
