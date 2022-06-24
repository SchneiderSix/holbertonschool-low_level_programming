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
	unsigned int i, j, k;
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
	for (k = 0; k < i; k++)
	{
		m[k] = *(s1 + k);
	}
	for (i = 0; k < j; i++)
	{
		m[k++] = *(s2 + i);
	}
	m[k] = '\0';
	return (m);
}
