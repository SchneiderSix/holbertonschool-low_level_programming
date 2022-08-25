#include "search_algos.h"

/** binary_search - search in array spliting in two
* @array: array
* @size: size of array
* @value: value to be searched
* Return: index or -1
*/
int binary_search(int *array, size_t size, int value)
{
    unsigned int l, mid, h = size - 1;

    if (!array)
        return (-1);
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (array[mid] == x)
        {
            return (mid);
        }
        if (array[mid] < x)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return (-1);
}
