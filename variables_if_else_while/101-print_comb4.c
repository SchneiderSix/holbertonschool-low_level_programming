#include <stdio.h>

/**
 *  * main - prints all possible combinations of
 *   * two digits
 *    * Return: Always 0 (Success)
 *     */

int main(void)
{
	int first;
	int second;
	int third;

	for (first = 48; first < 58; first++)
	{
		for (second = 48; second < 58; second++)
		{
			for (third = 48; third < 58; third++)
			{
				if (third > second > first)													{
																				putchar(first);
					putchar(second);
					putchar(third);

					if (first != 57 || second != 57 || third != 48)											{																putchar(',');
							putchar(' ');
						}
					}
			}
		}
	}														
	putchar('\n');
	return (0);
}
