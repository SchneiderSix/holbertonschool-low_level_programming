#include "main.h"

/**
 * swap_int - swap val of var
 * @a: var
 * @b: var
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
