#include "main.h"
#include <stddef.h>
/**
 * print_binary - explicit name
 * @n: int
 * Return: converted number
 */
void print_binary(unsigned long int n)
{
	int i, zeros = 0;
	unsigned long int comp;

	for (i = 63; i >= 0; i--)
	{
		comp = n >> i;

		if (comp & 1)
		{
			_putchar('1');
			zeros++;
		}
		else if (zeros)
		{
			_putchar('0');
		}
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
