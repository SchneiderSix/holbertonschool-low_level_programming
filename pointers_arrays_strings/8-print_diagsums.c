#include "main.h"

/**
 * print_diagsums - sum in diagonal
 * @a: var
 * @size: var
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	char *fd;
	char *sd;
	int i;
	int k;

	*fd = 0;

	*sd = 0;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size; k++)
		{
			if (i == k)
			{
				fd += a[i][k];
			}
			if ((i + k) == (size - 1))
			{
				sd += a[i][k];
			}
		}
	}
		_putchar(fd);
		_putchar(", "sd);

}
