#include <stdio.h>

/**
 * main - assign a random number to the variable n each
 * time it is executed and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n random.Next(-10, 10);

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
