#include "main.h"

/**
 * print_to_98 - print nat num
 * until 98
 * @n: var int
 * Return:  return result
 */

void print_to_98(int n)
{
	for (n = 48; n <= 5756; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
