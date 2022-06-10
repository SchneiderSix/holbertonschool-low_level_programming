#include "main.h"

/**
 * more_numbers - print numbers
 * Return: Always 0.
 */

void print_line(int n)
{
	for (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
