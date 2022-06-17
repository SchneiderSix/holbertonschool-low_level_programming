#include "main.h"

/**
 * *_strchr - locate a char
 * in a string
 * @s: var
 * @c: var
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}

	return ('\0');
}
