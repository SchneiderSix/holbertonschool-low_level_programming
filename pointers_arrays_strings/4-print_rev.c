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

	i = 0;

	while (*s != '\0')
	{
		i++;
	}

	for (last = i; last == 0; last--)
	{
		_putchar(s[lastlast]);
	}
	_putchar('\n');
}
