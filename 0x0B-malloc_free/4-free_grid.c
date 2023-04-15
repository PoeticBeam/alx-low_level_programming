#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dim grid previously created
 * @grid: pointer to 2 dim grid
 * @height: no of rows of array
 *
 * Return: Nothing
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
