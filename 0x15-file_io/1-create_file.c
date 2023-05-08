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
	int fd, w;

	if (filename == NULL)
		return (-1);

	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC);

	w = write(fd, text_content, strlen(text_content));

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);

	return (1);
}

