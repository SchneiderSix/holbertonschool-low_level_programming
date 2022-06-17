#include "main.h"

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
	int i, p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (p = 0; accept[p] != '\0'; p++)
		{
			if (s[i] == accept[p])
			{
				return (s);
			}
		}
	}

	return ('\0');
}
