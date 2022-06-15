#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest
 * @dest: var
 * @src: var
 *Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (dest);
}
