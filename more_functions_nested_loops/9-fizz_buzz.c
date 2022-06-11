#include "main.h"
#include <stdio.h>

/**
 * main - print numbers 1-100
 * multp of 3 fizz
 * multp of 5 buzz
 * Return: Always 0 Success.
 */

int main(void)
{
	int lowiq;

	for (lowiq = 1; lowiq < 101; lowiq++)
	{
		if (lowiq % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (lowiq % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (lowiq % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d",lowiq);
		}
	}
	printf('\n');
	return (0);
}
