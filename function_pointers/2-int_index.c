#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: array
 * @size: numb of elements of array
 * @cmp: pointer to function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
