#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file to append
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on Success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, size);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
