#include "main.h"
#include <stddef.h>

/**
 * *_strspn - return numb of bytes
 * in a string
 * @s: var
 * @accept: var
 * Return: return numb of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t i, p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (p = 0; accept[p] != s[i]; p++)
		{
			if (accept[p] == '\0')
			{
				return (i);
			}
		}
	}

	return (i);
}
