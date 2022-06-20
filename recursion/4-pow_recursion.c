#include "main.h"

/**
 * _pow_recursion - print power of base x
 * with numb y
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
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
