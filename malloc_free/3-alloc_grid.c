#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * **alloc_grid - return pointer to
 * an array of two dimensions
 * @width: var
 * @height: var
 * Return: pointer or null
 */

int **alloc_grid(int width, int height)
{
	int i, k;

	int **x = malloc((width * height) * sizeof(int));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (x == 0)
	{
		return(NULL);
	}
	for (i = 0; i < width * height; i++)
	{
		x[i] = i + 1;
	}
	for (i = 0; i < width; i++)
	{
		for (k = 0; k < height; k++)
		{
			x[i][k] = 0;
		}
	}
	return (x);
}
