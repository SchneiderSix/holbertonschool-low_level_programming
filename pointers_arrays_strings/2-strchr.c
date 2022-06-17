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
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s* == c)
		{
			return (char *)s;
		}
	}
	return (NULL);
}
