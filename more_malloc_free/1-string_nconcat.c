#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: string
 * @s2: string
 * @n: var
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *m;

	i = 0;
	j = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}

	if (n < len2)
	{
		m = malloc(sizeof(char) * (len2 + n + 1));
	}
	else
	{
		m = malloc(sizeof(char) * (len2 + len1 + 1));
	}

	if (m == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		m[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		m[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		m[i++] = s2[j++];
	}
	m[i] = '\0';
	return (m);
}
