#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns pointer to a
 * newly allocated space in memory
 * which contains a copy of the
 * string given as a parameter
 * @str: starting char
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *p = malloc(sizeof(strlen(str) + 1));
	
	char *psrc = str;

	char *pdst = p;


	if (str == NULL)
	{
		return (NULL);
	}

	while (*psrc != 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	return (p);
}
