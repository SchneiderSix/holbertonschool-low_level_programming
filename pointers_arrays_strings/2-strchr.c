#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locate a char
 * in a string
 * @s: var
 * @c: var
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}

		s++;
	}
	if (c == '\0')
	{
		break;
	}
	return (NULL);
}
