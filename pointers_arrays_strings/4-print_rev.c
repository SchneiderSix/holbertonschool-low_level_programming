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

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
		for (; i = 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
