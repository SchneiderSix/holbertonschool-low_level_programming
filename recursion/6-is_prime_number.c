#include "main.h"

/**
 * is_prime_number - prime numbers
 * @n: num
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	int k;

	k = n;

	if (n > 0 && n % 1 == 0 && n % k == 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
	{
		return (0);
	}

}
