#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - print numbers
 * @n: var positive
 * @separator: pointer to string
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
		}
		else
		{
			printf("%d%s", va_arg(list, int), separator);
		}
	}
	va_end(list);
	printf("\n");
}
