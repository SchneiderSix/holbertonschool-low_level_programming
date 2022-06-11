#include "main.h"

/**
 * main - print numbers 1-100
 * multp of 3 fizz
 * multp of 5 buzz
 * Return: Always 0 Success.
 */

int main(void)
{
	int lowiq;

	for (lowiq = 1; lowiq < 100; lowiq++)
	{
		if (lowiq % 15 == 0)
		{
			_putchar(FizzBuzz);
		}
		else if (lowiq % 5 == 0)
		{
			_putchar(Buzz);
		}
		else if (lowiq % 3 == 0)
		{
			_putchar(Fizz);
		}
		else
		{
			_putchar(lowiq);
		}
	}
	_putchar('\n');
	return (0);
}
