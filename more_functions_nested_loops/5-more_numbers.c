#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int pepito;
	char count;

	count = 1;

	while (count < 11)
	{

		for (pepito = 48; pepito <= 57; pepito++)
		{
			if (pepito > 57)
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
