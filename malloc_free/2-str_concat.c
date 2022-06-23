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
	int i, k;
	char *x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
	}
	for (k = 0; *(s2 + k) != '\0'; k++)
	{
	}

	x = malloc(i + k + 1);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		x[i] = *(s1 + i);
	}
	for (k = 0; *(s2 + k) != '\0'; k++)
	{
		x[i + k] = *(s2 + k);
	}

	return (x);
}
