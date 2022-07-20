#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - explicit name
 * @filename: name of the file to be read
 * @text_content: string to write into the file
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
	{
		return (-1);
	}
	o = open(filename, O_WRONLY | O_APPEND);

	if (!text_content)
	{
		return (1);
	}

	if (o == -1)
	{
		 return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		w = write(o, text_content, len);

		if (w == -1)
		{
			return (-1);
		}
		close(o);
		return (1);
	}
	close(o);
	return (-1);
}
