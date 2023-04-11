#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d grid
 * @grid: parameter
 * @height: parameter
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0 ; m < height ; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
