#include "main.h"

/**
 * more_numbers - print numbers
 * Return: Always 0.
 */

void more_numbers(void)
{
	int count, n;

	for (count = 1; count <= 10; count++)
	{

		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				_putchar((pepito / 10) + '0');
			}
			else
			{
				_putchar((pepito % 10) + '0');
			}
		count++;
		}
	}
	_putchar('\n');
}
