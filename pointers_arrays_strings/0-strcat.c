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
	int l, m;

	l = 0;
	m = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	while (dest[m] != '\0')
	{
		src[l] = dest[m];
		m++;
		l++;
	}
	dest[m] = '\0';

	return (dest);
}
