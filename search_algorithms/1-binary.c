#include "search_algos.h"

/** binary_search - search in array spliting in two
* @array: array
* @size: size of array
* @value: value to be searched
* Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int l, mid, h = size - 1, i;

	if (!array)
		return (-1);
	
	while (l <= h)
	{
		mid = l + (h - l) / 2;
		printf("Searching in array: ");
			for (i = l; i <= h; i++)
			{   
					if(i != l)
						printf(", ");
					printf("%d", array[i]);
			}
			printf("\n");

		if (array[mid] < value)
			l = mid + 1;
		else
			h = mid - 1;
		if (array[mid] == value)
		{
			printf("Searching in array: %d", array[mid]);
			return (mid);
		}

	}
	return (-1);
}
