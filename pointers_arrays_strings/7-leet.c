#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @h: var
 *Return: Always 0.
 */

char *leet(char *h)
{
	int i;
	int p;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	i = 0;

	while (h[i] != '\0')
	{
		for (p = 0; p < 10; p++)
		{
			if (h[i] == letters[p])
			{
				h[i] = numbers[p];
			}
		}
		i++;
	}
	return (h);
}
