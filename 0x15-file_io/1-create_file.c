#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: success (1), fail or filename is NULL (-1)
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_wr;

	if (filename == NULL)
	return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_desc == 1)
	return (-1);

	if (text_content != NULL)
	{
	bytes_wr = write(file_desc, text_content, _strlen(text_content));

	if (bytes_wr == -1)
		{
		close(file_desc);
		return (-1);
		}
	}
	close(file_desc);
	return (1);
}

/**
 * _strlen - finds the length of a string
 *
 * @s: input characters
 *
 * Return: length of string (i)
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
