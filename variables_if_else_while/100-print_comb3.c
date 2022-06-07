#include <stdio.h>

/**
 * main - prints all possible combinations of
 * two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			if (first != second && second != first)
			{
				putchar(first);
				putchar(second);
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
	}
}
