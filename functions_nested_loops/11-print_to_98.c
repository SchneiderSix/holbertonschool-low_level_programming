#include "main.h"
#include <stdio.h>

/**
 * main - print nat num
 * until 98
 * @n: var int
 * Return:  return result
 */

int main()
{
	int numb, count;

	for(count = 0; count <= 98;)
	{
		if (numb <= 9)
		{
			_putchar(numb);
		}
		else
		{
			_putchar((numb / 10) + '0');
			_putchar((numb % 10) + '0');
		}
		count++
}
