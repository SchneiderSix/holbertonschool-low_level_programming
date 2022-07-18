#include "main.h"
#include <stddef.h>
/**
 * print_binary - explicit name
 * @n: int
 * Return: converted number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 32768;

	while (mask > 0)
	{
		if ((n & mask) == 0 )
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		mask = mask >> 1;
	}
}
