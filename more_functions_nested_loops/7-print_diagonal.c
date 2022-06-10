#include "main.h"

/**
 * print_line - print numbers
 * @n: int var
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		int spa;

		for (spa = 0; spa < n; spa++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
