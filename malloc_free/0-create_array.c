#include "main.h"
#include <stdlib.h>

/**
 * create_array - crate array of chars
 * starting from c
 * @size: size of the array
 * @c: starting char
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p =  malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
