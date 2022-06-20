#include "main.h"

/**
 * factorial - print factorial of num
 * @x: num
 * @y: num
 * Return: x pow y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
