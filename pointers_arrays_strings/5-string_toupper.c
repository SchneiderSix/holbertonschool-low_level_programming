#include "main.h"

/**
 * *string_toupper - explicit name
 * @h: var
 *Return: Always 0.
 */

char *string_toupper(char *h)
{
	int i;

	i = 0;

	while (h[i] != '\0')
	{
		i++;
		if (h[i] >= 'a' && h[i] <= 'z')
		{
			h[i] = h[i];
		}
	}
	return (*h);
}
