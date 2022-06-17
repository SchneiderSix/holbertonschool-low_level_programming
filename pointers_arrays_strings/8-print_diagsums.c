#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum in diagonal
 * @a: var
 * @size: var
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int fd;
	int sd;
	int i;
	int k;
	int arr[][];

	a = arr;

	fd = 0;

	sd = 0;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (i == k)
			{
				fd += arr[i][k];
			}
			if ((i + k) == (size - 1))
			{
				sd += arr[i][k];
			}
		}
	}
	printf("%d, %d\n", fd, sd);

}
