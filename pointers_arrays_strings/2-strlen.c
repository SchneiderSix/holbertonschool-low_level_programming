#include "main.h"

/**
 * _strlen - Write a function that
 * returns the length of a string
 * @s: var
 *Return: Always 0.
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
