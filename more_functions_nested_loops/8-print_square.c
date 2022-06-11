#include "main.h"

/**
 * print_square - print numbers
 * @size: int var
 * Return: Always 0.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int hiq, liq;

		for (hiq = 0; hiq < size; hiq++)
		{
			for (liq = 0; liq < size; liq++)
			{
				if (hiq > liq)
				{
					_putchar('#');
				}
				else if (liq < hiq)
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
