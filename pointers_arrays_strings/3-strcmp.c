#include "main.h"
#include <stddef.h>

/**
 * _strcmp - copy a string
 * @s1: var
 * @s2: vari
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	size_t n;

	while ( n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
	}
}
