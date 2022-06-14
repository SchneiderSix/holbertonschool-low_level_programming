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
	int p;

	last = 0;

	while (str[last] != '\0')
	{
		last++;
	}

	if (last % 2 == 0)
	{
		for (i = last / 2; i < last; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (p = (last - 1) / 2; p < last; p++)
		{
			_putchar(str[p + 1]);
		}
	}
}
