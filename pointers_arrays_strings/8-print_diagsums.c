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

	fd = 0;

	sd = 0;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (i == k)
			{
				fd += a[(size * i) + i];
			}
			if ((i + k) == (size - 1))
			{
				sd += a[(size * (k - 1) + (k - 1))];
			}
		}
	}
	printf("%d, %d\n", fd, sd);

}
