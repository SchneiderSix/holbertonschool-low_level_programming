#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * *malloc_checked - allocates memory
 * @b: var
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
	        {
		}
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		for (j = 0; *(s2 + j) != '\0'; j++)
		{
		}
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
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		m[i] = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		m[i + j] = *(s2 + j);
	}
	return (m);
}
