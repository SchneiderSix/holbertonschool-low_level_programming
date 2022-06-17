#include "main.h"

/**
 * *_strchr - locate a char
 * in a string
 * @s: var
 * @c: var
 * Return: return pointer to first
 * occurence or null
 */

char *_strchr(char *s, char c)
{

	for (; *s >= '\0'; ++s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}

	return ('\0');
}
