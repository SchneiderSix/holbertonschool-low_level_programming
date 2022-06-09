#include "main.h"

/**
 * print_last_digit - this thing
 * @r: int var
 * Return: last digit
 */

int print_last_digit(int r)
{

	int ld;

	ld = r % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return (ld);
}
