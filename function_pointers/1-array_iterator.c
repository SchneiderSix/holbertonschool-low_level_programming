#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: var
 * @f: pointer to function
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
