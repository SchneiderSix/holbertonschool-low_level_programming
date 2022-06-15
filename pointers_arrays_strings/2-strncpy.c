#include "main.h"

/**
 * *_strncpy - copy a string
 * @dest: var
 * @src: vari
 * @n: var
 *Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
