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
	char letters[10];
	char numbers[10];

	letters[10] = {"aAeEoOtTlL"}
	numbers[10] = {"4433007711"}
	i = 0;

	while (h[i] != '\0')
	{
		for (p = 0; p < 10; p++)
		{
			if (h[i] == letters[p])
			{
				numbers[p] = h[i];
		}
		i++;
	}
	return (h);
}
