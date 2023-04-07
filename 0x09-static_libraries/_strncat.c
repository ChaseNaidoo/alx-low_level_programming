#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: destination buffer
 * @src: source string
 * @n: the number of bytes
 *
 * Return: (dest)
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
{
	ptr++;
}
	while (n > 0 && *src != '\0')
{
	*ptr++ = *src++;
	n--;
}
	*ptr = '\0';
	return (dest);
}
