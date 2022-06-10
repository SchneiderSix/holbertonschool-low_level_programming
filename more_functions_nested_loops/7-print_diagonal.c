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
			if (spa == n)
			{
				_putchar('\\');
			}
			else if (spa < n)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
		n--;
	}
	_putchar('\n');
}
