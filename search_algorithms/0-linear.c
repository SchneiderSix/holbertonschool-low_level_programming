#include "search_algos.h"

/**
* linear_search - search index of value in array
* @array: array
* @size: size of array
* @value: value to be searched
* Return: index or -1
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, value);
		if (array[i] == value)
			return (i);

	}
	return (-1);
}
