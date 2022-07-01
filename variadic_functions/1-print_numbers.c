#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @n: var positive
 * @separator: pointer to string
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, j;

	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%d", va_arg(list, int));
		}

		for (j = 0; j < (n - 1); j++)
		{
			printf("%s", separator);
		}
	
	}
	va_end(list);
	printf("\n");
}
