#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile -  reads text file and prints to the POSIX standard output.
 *
 * @filename: name of file to read
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it reads and print, if fail (0)
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t bytes_rd;
	ssize_t bytes_wr;

	if (filename == NULL)
	return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
	return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
	close(file_desc);
	return (0);
	}

	bytes_rd = read(file_desc, buffer, letters);

	if (bytes_rd == -1)
	{
	free(buffer);
	close(file_desc);
	return (0);
	}

	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);

	free(buffer);
	close(file_desc);

	if (bytes_wr == -1 || bytes_wr != bytes_rd)
	return (0);

	return (bytes_wr);
}
