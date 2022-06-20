#include "main.h"

/**
 * _sqrt_recursion - print natural
 * square root of a numb
 * @n: num
 * Return: natural square or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return _sqrt_recusion((n - 1) + n + n - 1);
	}
}
