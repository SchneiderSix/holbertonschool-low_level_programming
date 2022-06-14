#include "main.h"

/**
 * print_rev - Write a function that
 * prints a string followed by
 * a new line to stdout
 * @s: var
 *Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int last;
	int pepito;

	i = 0;

	while (*s != '\0')
	{
		i++;
	}

	last = i;

	for (pepito = last - 1; pepito == 0; pepito--)
	{
		_putchar(s[pepito]);
	}
	_putchar('\n');
}
