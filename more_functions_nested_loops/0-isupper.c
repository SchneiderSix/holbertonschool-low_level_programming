#include "main.h"

/**
 * int _isupper - uppercase test
 * @c: char var
 * Return: 1 if upp, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
