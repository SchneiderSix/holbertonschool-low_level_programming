#include "main.h"

/**
 * rev_string - reverses a string
 * @s: var
 *Return: Always 0.
 */

void rev_string(char *s)
{
	int i;
	int last;
	int pepito;
	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	last = i - 1;

	for (pepito = 0; pepito < i/2; pepito++)
	{
		temp = s[pepito];
		s[pepito] = s[last];
		s[pepito--] = temp;
	}
}
