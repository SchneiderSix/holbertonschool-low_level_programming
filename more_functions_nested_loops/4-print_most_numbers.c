#include "main.h"

/**
 * print_numbers - print numbers
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int pepito;

	for (pepito = 48; pepito <= 57; pepito++)
	{
		if (pepito != 50 && pepito != 52)
		{
			_putchar(pepito);
		}
	}
	_putchar('\n');
}
