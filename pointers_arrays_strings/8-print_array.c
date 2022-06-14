#include "main.h"
#include <stdio.h>

/**
 * void print_array - function that prints
 * n elements of an array of integers
 * , followed by a new line
 * @n: var
 * @*a: pointer
 *Return: Always 0.
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (a[count] != '\0')
		{
			printf("%d, ", a[count]);
		}
		else
		{
			printf("%d", a[count]);
		}
	}
}
