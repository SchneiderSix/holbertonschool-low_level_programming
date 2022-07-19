#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates a file and write a string
 * @filename: name of the file to be read
 * @text_content: string to write into the file
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);
	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
