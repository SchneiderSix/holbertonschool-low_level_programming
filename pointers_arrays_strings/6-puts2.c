#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: var
 *Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	int last;

	last = 0;

	while (str[last] != '\0')
	{
		last++;
	}

	for (i = 0; i < last; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
