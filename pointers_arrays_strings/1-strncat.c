#include "main.h"

/**
 * *_strncat - most n bytes from src
 * and src oes not need to be null
 * terminated if it contains n
 * or more bytes
 * @dest: var
 * @src: vari
 * @n: var
 *Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int j, k;

	j = 0;

	k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0' && k < n)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';

	return (dest);
}
