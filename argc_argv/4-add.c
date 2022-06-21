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
	int i;

	int result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		int x = strtol(argv[i], NULL, 10);

		result = result + x;

		if (((x / 10) + '0') > '9' || ((x / 10) + '0') < '0')
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
