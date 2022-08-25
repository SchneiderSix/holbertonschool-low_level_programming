#include "search_algos.h"

/** binary_search - search in array spliting in two
* @array: array
* @size: size of array
* @value: value to be searched
* Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int l, mid, h = size - 1, left, right;

	if (!array)
		return (-1);
	
	while (l <= h)
	{
	    

		if (array[mid] < value)
		{
			printf("Searching in array: %d", array[mid]);
		    for (left = mid + 1; left < size; left++)
    		{
    			printf(", %d", array[left]);
    		}
    		printf("\n");
			l = mid + 1;
		}

		else
		{
			printf("Searching in array: %d", array[mid]);
			for (right = mid; right < size; left++)
			{
				printf(", %d", array[right]);
			}
			printf("\n");
			h = mid - 1;
		}
		if (array[mid] == value)
		{
			printf("Searching in array: %d", array[mid]);
			return (mid);
		}
		mid = l + (h - l) / 2;
	}
	return (-1);
}
