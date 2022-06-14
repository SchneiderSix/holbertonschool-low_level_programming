#include "main.h"

/**
 * puts_half - Write a function that prints half of a
 * string, followed by a new line
 * @str: var
 *Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int last;
	char n;

	last = 0;

	while (str[last] != '\0')
	{
		last++;
	}

	n = (last - 1) / 2;

	for (i = 0; i < n; i ++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
