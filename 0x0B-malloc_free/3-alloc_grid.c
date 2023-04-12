#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for 2D array of integers and initialize with 0
 * @width: the number of rows
 * @height: the number of columns
 *
 * Return: a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * width);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		*(grid + i) = (int *) malloc(sizeof(int) * height);
		if (*(grid + i) == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			*(*(grid + i) + j) = 0;
		}
	}
	return (grid);
}

