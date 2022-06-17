#include "main.h"

/**
 * *_memset - fills memory with
 * constant byte
 * @s: var
 * @b: var
 * @n: var
 *Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *d = s;

	while (n > 0)
	{
		*d = char b;
		d++;
		n--;
	}

	return (s);
}
