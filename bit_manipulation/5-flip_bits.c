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
	int bits = 0, lbn, lbm;

	while (n > 0 || m > 0)
	{
		lbn = n & 1;
		lbm = m & 1;

		if (lbn != lbm)
		{
			bits++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (bits);

}
