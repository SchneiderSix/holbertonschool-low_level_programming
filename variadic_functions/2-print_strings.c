#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - explicit name
 * @n: var positive
 * @separator: pointer to string
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);

	for (i = 0; i < (n - 1); i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(list, char));
		}
		else if (va_arg(list, char) == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%d%s", va_arg(list, char), separator);
		}

	}
	printf("%d", va_arg(list, char));
	printf("\n");
	va_end(list);
}
