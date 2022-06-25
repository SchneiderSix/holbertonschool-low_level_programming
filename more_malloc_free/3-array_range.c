#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - create array with malloc
 * in order
 * @min: int val
 * @max: int val
 * Return: pointer or null
 */

int *array_range(int min, int max)
{
	int *marray;
	unsigned int i;

	if (min > max)
	{
		return (NULL);
	}

	marray = malloc(sizeof(int) * max);

	if (marray == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; min++, i++)
	{
		marray[i] = min;
	}
	return (marray);
}
