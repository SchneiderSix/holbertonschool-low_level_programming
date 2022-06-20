#include "main.h"

/**
 * _sqrt_recursion - print natural
 * square root of a numb
 * @n: num
 * @i: itinerator
 * Return: -1 or perfect square
 */
int perfectsquare(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (perfectsquare(n, 0));
	}
}

/**
 * perfectsquare - explicit name
 * @n: numb
 * @i: itinerator
 * Return: -1 or perf square
 */

int perfectsquare(int n, int i)
{
	if (i + i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (perfectsquare(n, i + 1));
	}
}
