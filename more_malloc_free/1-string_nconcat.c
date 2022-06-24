#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string
 * @n: var
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		i = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		j = strlen(s2);
		if (n < j)
		{
			j = n;
		}
	}
	j = j + i;
	m = malloc(sizeof(char) * (j + 1));

	if (m == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		m[k] = *(s1 + k);
	}
	for (l = i; l < j; l++)
	{
		m[k++] = *(s2 + l);
	}
	m[k] = '\0';
	return (m);
}
