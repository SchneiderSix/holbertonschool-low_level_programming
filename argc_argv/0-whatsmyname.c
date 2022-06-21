#include "main.h"
#include <stdio.h>

/**
 * main - print name of program with
 * new line
 */

void main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
