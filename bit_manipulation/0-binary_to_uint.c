#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - binary to decimal
 * @b: string
 * Return: null or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dr = 0;

	if (!b)
	{
	return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	dr = dr * 2  + (b[i] - '0');
	}
	return (dr);
}
