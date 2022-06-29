#include "3-calc.h"
/**
 * main - calculator
 * @argc: number of arguments
 * @argv: pointer array to each argument
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, lowiq;
	char *op_check;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	op_check = argv[2];
	num2 = atoi(argv[3]);

	if ((*argv[2] == '%' || *argv[2] == '/') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	calc = get_op_func(op_check);
	lowiq = calc(num1, num2);

	printf("%d\n", lowiq);
	return (0);
}
