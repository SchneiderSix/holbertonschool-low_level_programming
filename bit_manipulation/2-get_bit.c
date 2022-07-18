#include "main.h"
#include <stddef.h>
/**
 * get_bit - explicit name
 * @n: int
 * @index: index
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
