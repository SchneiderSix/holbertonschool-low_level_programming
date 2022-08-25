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
		mid = l + (h - l) / 2;

		if (array[mid] < value)
		{
			l = mid + 1;
			printf("Searching in array: %d", array[0]);
			for (left = 0; left < mid; left++)
			{
				printf(", %d", array[left]);
			}
			printf("\n");
		}
		else
		{
			h = mid - 1;
			printf("Searching in array: %d", array[size]);
			for (right = 0; right < mid; left++)
			{
				printf(", %d", array[right]);
			}
			printf("\n");
		}
		if (array[mid] == value)
		{
			printf("Searching in array: %d", array[mid]);
			return (mid);
		}
	}
	return (-1);
}
