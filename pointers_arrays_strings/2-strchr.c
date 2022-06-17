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
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
