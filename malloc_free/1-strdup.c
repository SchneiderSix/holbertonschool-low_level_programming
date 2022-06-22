#include "main.h"
#include <stdlib.h>

/**
 * *create_array - returns pointer to a
 * newly allocated space in memory
 * which contains a copy of the
 * string given as a parameter
 * @str: starting char
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *p = (char *) malloc(sizeof(strlen(str) + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	return (p);
}
