#include "main.h"

/**
 * append_text_to_file - Appends text to an existing file.
 *
 * @filename: the path to the file.
 * @text_content: data to write into the file
 *
 * Return: on success 1, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, strlen(text_content));

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}

