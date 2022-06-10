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
		_putchar(' ');
		n--;
	}
	_putchar('\\');
	_putchar('\n');
}
