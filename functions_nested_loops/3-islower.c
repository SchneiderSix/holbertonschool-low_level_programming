#include "main.h"

/**
 * _islower - prints the alphabet
 */

int _islower(void)
{
	int letter;

	letter = 'c';

	if (islower(letter)) _putchar('1');
	else _putchar('0');
	
	_putchar('\n');
}
