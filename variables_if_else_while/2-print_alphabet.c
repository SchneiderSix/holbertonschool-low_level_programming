#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 */

int main(void)
{
	for(int x = "a"; x <= "z"; x++)
	{
		x = tolower(x);
		putchar(x);
	}
}
