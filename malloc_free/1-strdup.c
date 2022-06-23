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
int _strlen (char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *_strdup(char *str)
{
	char *p;
	int i;

	i = 0;

	if (str == 0)
	{
		return (NULL);
	}

	if (!(p = (char*)malloc(sizeof(char) * _strlen(src) + 1)))
	{
		return (NULL);
	}
	while (*src)
	{
		p[i++] = *src++;
	}
	p[i] = '\0';
	return (p);

}
