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

	result = 1;

	for (i = 1; i < argc; i++)
	{
		int x = strol(argv[i], NULL, 10);

		result = result * x;
	}

	printf("%d\n", result);

	return (0);
}
