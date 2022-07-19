#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads text file and prints
 * it to the POSIX standard output
 * @filename: name of the file to be read 
 * @letters: n of letters to be read
 * Return: 0 if null or n of bytes that can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t o, r, w;

	if (!filename)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (r != w || o == -1 || r == -1 || w == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
