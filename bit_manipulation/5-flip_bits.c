#include "main.h"
#include <stddef.h>
/**
 * flip_bits - bits nedded to flip one numb
 * to another numb
 * @n: int
 * @m: int
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;

	int mask = n ^ m;

	bits = n ^ mask;

	return (bits);
}
