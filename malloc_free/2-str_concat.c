#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *str_concat - concatenate two strings
 * @s1: pointer string
 * @s2: pointer string
 * Return: pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	int i, k = 0;


	char *x = malloc(strlen(s1) + strlen(s2) + 1);

	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; (x[k] = s1[i]); ++i, ++k)
	{
	}
	for (i = 0; (x[k] = s2[i]); ++i, ++k)
	{
	}
	if (s1 == NULL)
	{
		return (("")x);
	}
	if (s2 == NULL)
	{
		return (x(""));
	}
	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}

	return (x);
}
