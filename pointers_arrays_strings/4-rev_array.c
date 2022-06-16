#include "main.h"

/**
 * reverse_array - explicit name
 * @a: var
 * @n: var
 *Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
