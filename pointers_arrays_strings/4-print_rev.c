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
	int lastlast;

	i = 0;

	while (*s != '\0')
	{
		i++;
	}

	last = i;

	for (last = lastlast; lastlast == 0; lastlast--)
	{
		_putchar(s[lastlast]);
	}
	_putchar('\n');
}
