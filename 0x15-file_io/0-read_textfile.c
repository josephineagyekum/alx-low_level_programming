#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and print to STDOUT.
 * @filename: text file to be being read
 * @letters: number of letters to read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails, cannot be opened and read or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t t;
	ssize_t t;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
