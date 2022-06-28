#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes every element
 * of array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
