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
	unsigned int i, j, len1, len2;
	char *m;

	len1 = strlen(s1);
	len2 = strlen(s2);
	i = 0;
	j = 0;
	
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
