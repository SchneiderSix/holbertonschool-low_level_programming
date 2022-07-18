#include "main.h"
#include <stddef.h>
/**
 * clear_bit - explicit name
 * @n: pointer to int
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);
	}
	*n &= ~(1UL << index);

	return (1);
}
