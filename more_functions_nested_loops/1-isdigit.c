#include "main.h"

/**
 * _isdigit - digit between 0,9
 * @c: char var
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 10)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
