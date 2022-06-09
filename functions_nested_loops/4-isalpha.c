#include "main.h"

/**
 * _isalpha - check the char
 * @c: char var cheked
 * Return: 1 for alphabetic char
 * 0 for otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
