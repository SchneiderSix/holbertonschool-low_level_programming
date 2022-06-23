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

	for (i = 0; (x[k] = s1[i]) != '\0'; ++i, ++k)
	{
	}
	for (i = 0; (x[k] = s2[i]) != '\0'; ++i, ++k)
	{
	}

	return (x);

}
