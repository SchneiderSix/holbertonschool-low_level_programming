#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

	int **pep;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pep = malloc(sizeof(int *) * height);
	if (pep == NULL)
	{
		free(pep);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pep[i] = malloc(sizeof(int) * width);

		if (pep[i] == 0)
		{
			for (k = 0; k < i; k++)
			{
				free(pep[k];
			}
			free(pep);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			pep[i][k] = 0;
		}
	}
	return (pep);
}
