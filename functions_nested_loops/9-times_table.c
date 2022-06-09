#include "main.h"

/**
 * times_table - prints every minute
 * Return: last digit
 */

void times_table(void)
{

	int columnzeros, rowscont, mult;

	for (columnzeros = 0; columnzeros <= 9; columnzeros++)
	{
		_putchar('0');

		for (rowscont = 1; rowscont <= 9; rowscont++)
		{
			_putchar(',');
			_putchar(' ');
			mult = columnzeros * rowscont;

			if (mult <= 9)
			{
				_putchar(mult);
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
