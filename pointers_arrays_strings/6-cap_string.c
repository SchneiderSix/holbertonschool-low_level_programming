#include "main.h"

/**
 * *cap_string - explicit name
 * capitalizes all words of a string
 * @h: var
 *Return: Always 0.
 */

char *cap_string(char *h)
{
	int i;

	i = 0;

	while (h[i] != '\0')
	{
		while (h[i] >= 'A' && h[i] <= 'Z')
		{
			i++;
		}
		if (h[i - 1] == 0 || h[i - 1] == ' ' || h[i - 1] == '\t' ||
		h[i - 1] == '\n' || h[i - 1] == ',' ||
		h[i - 1] == ';' || h[i - 1] == '.' ||
		h[i - 1] == '!' || h[i - 1] == '?' ||
		h[i - 1] == '"' || h[i - 1] == '(' ||
		h[i - 1] == ')' || h[i - 1] == '{' ||
		h[i - 1] == '}')
		{
			h[i] -= 32;
		}
		i++;
	}
	return (h);
}
