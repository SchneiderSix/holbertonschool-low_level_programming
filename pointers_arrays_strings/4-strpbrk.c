#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - return pointer
 * to the  first
 * occurrence in string s of any
 * of th bytes in string accept
 * @s: var
 * @accept: var
 * Return: return numb of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	size_t i, p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (p = 0; accept[p] == s[i]; p++)
		{
			if (accept[p] == s[i])
			{
				return (s);
			}
		}
	}

	return ('\0');
}
