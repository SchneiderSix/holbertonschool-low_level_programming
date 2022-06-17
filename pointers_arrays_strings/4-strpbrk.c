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
	int i;

	while(*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
