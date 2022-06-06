#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'A'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
