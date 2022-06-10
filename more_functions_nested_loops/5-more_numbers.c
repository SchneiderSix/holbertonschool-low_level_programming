#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int pepito;
	int count;

	count = 1;

	while (count < 11)
	{

		for (pepito = '0'; pepito < '14'; pepito++)
		{
			if (pepito < "10")
			{
				_putchar((pepito / 10) + '0');
			}
			else
			{
				_putchar((pepito % 10) + '0');
			}
		count++
		}
	}
	_putchar('\n');
}
