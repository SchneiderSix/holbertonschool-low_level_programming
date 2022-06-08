#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * 10 times
 */

void print_alphabet_x10(void)
{
	int count;
	char x;
	count = 0;

	while (count < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		count++;
		_putchar('\n');
	}
}
