#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * *malloc_checked - allocates memory
 * @b: var
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if ( a == NULL)
	{
		exit (98);
	}
	return (a);
}
