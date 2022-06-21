#include "main.h"

/**
 * main - print name of program with
 * new line
 */

void main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
	}
	_putchar('\n');
}
