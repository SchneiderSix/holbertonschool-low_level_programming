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
	int i, j;
	char *m;

	if (n >= strlen(s2))
	{
		m = malloc(strlen(s1) + strlen(s2) + 1);

		if (m == NULL)
		{
			return (NULL);
		}

		for (i = 0; (m[j] = s1[i]) != '\0'; ++i, ++j)
		{
		}
		for (i = 0; (m[j] = s2[i]) != '\0'; ++i, ++j)
		{
		}
	}

	return (m);
}
