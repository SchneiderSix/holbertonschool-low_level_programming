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

	while (*src != '\0')
	{
		src++;
	}
	while (*dest != '\0')
	{
		*src = *dest;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
