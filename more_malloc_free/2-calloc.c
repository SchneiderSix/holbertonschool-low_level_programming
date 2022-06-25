#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_calloc - alloc mem for arr
 * @nmemb: elements
 * @size: bytes
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		m[i] = 0;
	}
	return (m);
}
