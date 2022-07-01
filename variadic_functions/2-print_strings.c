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
	char *p;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);


	for (i = 0; i < n; i++)
	{
		p = (va_arg(list, char *));

		if (p == NULL)
		{
			printf("(nill)");
		}

		if (separator == NULL)
		{
			printf("%s", p);
		}
		else if (separator == 0 && i == 0)
		{
			printf("%s", p);
		}
		else
		{
			printf("%s%s", separator, p);
		}

	}
	printf("\n");
	va_end(list);
}
