#include "main.h"
#include <stddef.h>
/**
 * print_binary - explicit name
 * @n: int
 * Return: converted number
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int comp;

	for (i = 63; i >= 0; i--)
	{
		comp = n >> i;

		if (comp & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
