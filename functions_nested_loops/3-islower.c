#include "main.h"

/**
 * _islower - check the char
 * c - is a boy
 * Return: 1 for lowerchar
 * 0 for otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
