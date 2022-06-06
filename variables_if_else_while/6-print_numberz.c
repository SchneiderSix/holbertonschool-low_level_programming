#include <stdio.h>

/**
 * main - prints all single digit numbers of
 * base 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int rip;

	for (rip = 48; rip < 58; rip++)
	{
		putchar(rip);
	}
	putchar('\n');
	return (0);
}
