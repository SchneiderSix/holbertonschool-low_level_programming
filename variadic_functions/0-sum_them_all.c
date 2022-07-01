#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: var positive
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start (list, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg (list, int);
	}
	va_end (list);
	return (sum);
}
