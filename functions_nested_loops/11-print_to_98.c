#include "main.h"

/**
 * print_to_98 - print nat num
 * until 98
 * @n: var int
 * Return:  return result
 */

void print_to_98(int n)
{
	for (n = '0'; n <= '98'; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
