#include "main.h"

/**
 * print_more_numbers - print numbers
 * Return: Always 0.
 */

void more_numbers(void)
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
