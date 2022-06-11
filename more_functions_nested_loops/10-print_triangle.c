#include "main.h"

/**
 * print_triangle - print triangle
 * @size: int var
 * Return: Always 0.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, n;

		for (i = 1; i <= size; i++)
		{
			for (n = 1; n < size; n++)
			{
				_putchar(' ');
			}
			for (n = 1; n >= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
