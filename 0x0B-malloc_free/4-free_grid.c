#include <stdlib.h>
#include<stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: first parameter
 * @height: second parameter
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
