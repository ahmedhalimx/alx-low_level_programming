#include <string.h>
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
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}

