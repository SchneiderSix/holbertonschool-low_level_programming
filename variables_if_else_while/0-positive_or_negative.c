#include <stdio.h>
#include <time.h>

/**
 * main - assign a random number to the variable n each
 * time it is executed and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
