#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of program with
 * new line
 * @argc: numb of comm line arguments
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, k;

	int result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] > '9' || argv[i][k] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}

		int x = strtol(argv[i], NULL, 10);

		result = result + x;
	}
	printf("%d\n", result);
	return (0);
}
