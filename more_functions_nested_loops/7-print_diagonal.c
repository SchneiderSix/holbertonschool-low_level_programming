#include "main.h"

/**
 * print_diagonal - print numbers
 * @n: int var
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int hiq, liq;

		for (hiq = 0; hiq < n; hiq++)
		{
			for (liq = 0; liq < n; liq++)
			{
				if (hiq == liq)
				{
					_putchar('\\');
				}
				else if (liq < hiq)
				{
					_putchar(' ');
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
