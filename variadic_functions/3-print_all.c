#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - explicit name
 * @format: list of types of arguments passed
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i;
	char *string, *separator;

	i = 0;

	va_start(list, format);


	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int);
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int);
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, float);
				case 's':
					string = va_arg(list, char *);

					if (string == NULL)
					{
						string = "(nil)";
					}
					printf("%s%s", separator, string);
			}
			separator = ", ";
			i++

		}
	}
	printf("\n");
	va_end(list);
}
