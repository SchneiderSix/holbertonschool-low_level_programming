#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		else
			return (-1);
	}
}
