#include <stdio.h>

/**
 * main - prints all single digit numbers of
 * base 16 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int rip;
	char cho;

	for (rip = 48; rip < 58; rip++)
	{
		putchar(rip);
	}
	for (cho = 'a'; cho <= 'f'; cho++)
	{
		putchar(cho);
	}
	putchar('\n');
	return (0);
}
