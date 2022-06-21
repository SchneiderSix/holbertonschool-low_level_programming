#include "main.h"
#include <stdio.h>

/**
 * main - print name of program with
 * new line
 * @argc: numb of comm line arguments
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{	
	printf("%d\n", argc - 1);
	return (0);
}
