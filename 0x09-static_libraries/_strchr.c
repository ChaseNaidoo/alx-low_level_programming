#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: string
 * @c: character to search for
 *
 * Return: pointer to character c in string s (s), if not found (NULL)
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
{
	s++;
}
	if (*s == c)
{
	return (s);
}
	else
{
	return ('\0');
}
}
