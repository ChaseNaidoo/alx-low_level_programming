#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: input string
 * @accept: set of bytes to search for
 *
 * Return: pointer to bytes in s that matches the bytes in accept, else NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s != '\0')
{
	i = accept;
	while (*i != '\0')
{
	if (*i++ == *s)
{
	return (s);
}
}
	s++;
}
	return ('\0');
}
