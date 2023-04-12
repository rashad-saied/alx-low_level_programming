#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D array memory
 * @grid: the 2D array pointer
 * @height: the array rows
 *
 * Return: void
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

