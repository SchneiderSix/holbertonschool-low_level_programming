#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - return pointer to
 * @grid: the adress of two
 * dimensional grid
 * @height: var
 * Return: pointer or null
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i];
	}
	free(grid);
}
