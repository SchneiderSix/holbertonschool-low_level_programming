#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * 10 times
 */

void print_alphabet_x10(void)
{
	char count;
	int x;

	while (count = 0; count < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		count++;
	}
	_putchar('\n');
}
