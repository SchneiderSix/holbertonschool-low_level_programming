#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	s = malloc(i + 1);
	if (s == NULL || s == 0)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		s[i] = *(str + i);
	}

	return (s);

}
