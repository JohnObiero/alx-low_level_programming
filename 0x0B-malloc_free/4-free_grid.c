#include "main.h"

#include <stdlib.h>

/**
 * free_grid - frees a 2d integer grid created by alloc grid.
 * @grid: arrays in the grid
 * @height: row count
 * Return: pointer to array or null
 **/



void free_grid(int **grid, int height)

{

	int i;



	for (i = 0; i < height; i++)

		free(grid[i]);

	free(grid);
}
