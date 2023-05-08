#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: success (1), filesname is NULL or fail (-1)
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_wr;

	if (filename == NULL)
	return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
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
 * _strlen - Entry point
 *
 * @s: input character
 *
 * Return: (length of string)
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
