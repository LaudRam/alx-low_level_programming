#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of file to be created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on Success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, size);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
