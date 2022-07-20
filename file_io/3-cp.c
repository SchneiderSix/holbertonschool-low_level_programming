#include "main.h"
/**
 * main - copies content of a file to another file
 * @argc: n of args
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int fdr, fdw, rbuff = 1024, wbuff;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdr), exit(99);
	}
	while (rbuff == 1024)
	{
		rbuff = read(fdr, buff, 1024);
		if (rbuff == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wbuff = write(fdw, buff, rbuff);
		if (wbuff < rbuff)
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	}
	if (close(fdr) == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close %d\n", fdr), exit(100);

	if (close(fdw) == -1)
		dprintf(STDOUT_FILENO, "Error: Can't close %d\n", fdr), exit(100);

	return (0);
}
