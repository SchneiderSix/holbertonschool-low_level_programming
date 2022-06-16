#include "main.h"

/**
 * *string_toupper - explicit name
 * @h: var
 *Return: Always 0.
 */

char *string_toupper(char *h)
{
	const char comp = 'a' - 'A';

	while (*h)
	{
		*h = (*h >= 'a' && *h <= 'A') ? *h -= comp : *h;
	}
}
