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

	int **x;


	if (width <= 0 || height <= 0)
	{
		free(x);
		return (NULL);
	}
	x = malloc(sizeof(int) * height);
	if (x == NULL)
	{
		free(x);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);

		if (x == NULL)
		{
			free(x);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			x[i][k] = 0;
		}
	}
	return (x);
}
