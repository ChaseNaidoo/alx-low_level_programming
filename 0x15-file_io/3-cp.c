#include "main.h"

#define BUFFER_SIZE 1024

/**
 * print_usage - prints usage
 *
 * Return: no return
 *
 */
void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * print_error - prints error messages
 *
 * @message: the error message
 * @filename: the file name
 * @file_desc: file descriptor
 *
 * Return: no return
 *
 */
void print_error(char *message, char *filename, int file_desc)
{
	dprintf(STDERR_FILENO, message, filename);

	if (file_desc != -1)
	{
	close(file_desc);
	}
	exit(EXIT_FAILURE);
}

/**
 * main - entry point.
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: determined by status value
 *
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char *file_from, *file_to, *buffer;
	ssize_t bytes_rd, bytes_wr;

	if (argc != 3)
	{
	print_usage();
	exit(EXIT_FAILURE);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	print_error("Error: Can't read from file %s\n", file_from, -1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to == -1)
	{
	print_error("Error: Can't write to %s\n", file_to, fd_from);
	}
	buffer = malloc(BUFFER_SIZE);

	while ((bytes_rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
		{
		bytes_wr = write(fd_to, buffer, bytes_rd);

		if (bytes_wr == -1)
		print_error("Error: Can't write to %s\n", file_to, fd_from);
		}
	if (bytes_rd == -1)
	print_error("Error: Can't read from file %s\n", file_from, fd_from);
	if (close(fd_from) == -1)
	print_error("Error: Can't close fd %d\n", file_from, -1);
	if (close(fd_to) == -1)
	print_error("Error: Can't close fd %d\n", file_to, -1);

	exit(EXIT_SUCCESS);
}
