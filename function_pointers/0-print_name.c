#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: var
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
	{
		return;
	}

	f(name);
}
