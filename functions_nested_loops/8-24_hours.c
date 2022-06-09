#include "main.h"

/**
 * jack_bauer - prints every minute
 * Return: last digit
 */

void jack_bauer(void)
{

	int h, m;

	for (h = 0; h < 24;)
	{
		for (m = 0; m < 60;)
		{
			_putchar ((h / 10) + '0');
			_putchar ((h % 10) + '0');
			_putchar (':');
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar ('\n');
			m++;
		}
		h++;
	}
}
