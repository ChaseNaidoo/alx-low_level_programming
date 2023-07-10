#include "main.h"

/**
 * error_and_exit - exits codes and error message
 *
 * @exit_code: the exit code
 * @message: error mesaage
 * @file_name: name of the file
 *
 * Return: (no return) 
 *
 */
void error_and_exit(int exit_code, const char* message, const char* file_name)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(exit_code);
}

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 *
 */
int main(int argc, char* argv[])
{
	int file_from, file_to;
	ssize_t nchars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
	error_and_exit(97, "Usage: cp file_from file_to\n", "");
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
	error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
	close(file_from);
	error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((nchars = read(file_from, buffer, 1024)) > 0)
	{
	nwr = write(file_to, buffer, nchars);
	if (nwr == -1)
		{
		close(file_from);
		close(file_to);
		error_and_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (nchars == -1)
	{
	close(file_from);
	close(file_to);
	error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_from) == -1)
	{
	error_and_exit(100, "Error: Can't close file descriptor for file %s\n", argv[1]);
	}

	if (close(file_to) == -1)
	{
	error_and_exit(100, "Error: Can't close file descriptor for file %s\n", argv[2]);
	}

	if (chmod(argv[2], 0664) == -1)
	{
	error_and_exit(100, "Error: Can't set permissions for file %s\n", argv[2]);
	}
	return (0);
}
