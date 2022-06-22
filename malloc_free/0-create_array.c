#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	*p =  malloc(sizeof(char) * size);

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
