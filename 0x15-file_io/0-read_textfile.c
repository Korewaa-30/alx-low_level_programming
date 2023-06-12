#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: ...
 * @letters: ...
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	t = read(fd, a, letters);
	w = write(STDOUT_FILENO, a, t);

	free(a);
	close(fd);
	return (w);
}
