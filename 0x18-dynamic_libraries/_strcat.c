#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest: destination buffer
 * @src: source string
 *
 * Return: (dest)
 *
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}
	while (*src != '\0')
	{
	*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
