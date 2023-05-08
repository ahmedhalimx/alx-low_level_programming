#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: path to the file.
 * @text_content: text data to write onto the file.
 *
 * Return: on success (1), Otherwise (-1).
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, lend);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}

