#include "main.h"

/**
 * *_strcat - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * @dest: var
 * @src: var
 *Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int j, k;

	j = 0;

	k = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[k] = '\0';

	return (dest);
}
