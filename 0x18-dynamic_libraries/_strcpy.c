#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest: destination buffer
 *@src: source string
 *
 * Return: (the pointer to dest)
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *originaldest = dest;

	while (*src)
	{
	*dest++ = *src++;
	}
	*dest = '\0';
	return (originaldest);
}
