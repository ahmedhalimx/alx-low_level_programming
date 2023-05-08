#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a file and printes a specific number of letters
 * to the stdout
 *
 * @filename: the path to the file to read from
 * @letters: numbers of charater which will be read and printed to stdout
 *
 * Return: on success the numbers of characters printed, (0) on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, charsPrinted, fileData;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	fileData = read(fd, buffer, letters);
	charsPrinted = write(STDOUT_FILENO, buffer, fileData);
	free(buffer);

	close(fd);
	return (charsPrinted);
}

