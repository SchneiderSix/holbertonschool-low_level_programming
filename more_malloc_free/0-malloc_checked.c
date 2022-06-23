#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: var
 */

void *malloc_checked(unsigned int b)
{
	int c;

	c = 98;

	char *a = malloc(sizeof(char) * b);

	if ( a == NULL)
	{
		return (c);
	}
	return (a);
}
