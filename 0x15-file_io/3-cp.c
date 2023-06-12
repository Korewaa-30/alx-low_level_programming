#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - checks if files can be opened.
 * @file_a: ...
 * @file_b: ...
 * @argv: ...
 */

void error_file(int file_a, int file_b, char *argv[])
{
	if (file_a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: ...
 * @argv: ...
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_a, file_b, i;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_a file_b");
		exit(97);
	}

	file_a = open(argv[1], O_RDONLY);
	file_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_a, file_b, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_a, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_b, buf, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	i = close(file_a);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_a);
		exit(100);
	}

	i = close(file_b);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_a);
		exit(100);
	}
	return (0);
}
