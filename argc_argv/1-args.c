#include "main.h"
#include <stdio.h>

/**
 * main - print name of program with
 * new line
 * @argc: numb of comm line arguments
 * Return: 0
 */

int main(int argc)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
