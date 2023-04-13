#include "main.h"
#include <stdlib.h>

/**
 * _strlen - entry pont
 *
 * @s: input character
 *
 * Return: (length of string)
 *
 */
int _strlen(const char *s)
{
	unsigned int slen = 0;

	while (s[slen] != '\0')
	{
	slen++;
	}
	return (slen);
}

/**
 * _strcpy - Entry point
 *
 * @dest: destination buffer
 * @src: source string
 *
 * Return: (the pointer to dest)
 *
 */
char *_strcpy(char *dest, const char *src)
{
	unsigned int i = 0;

	while (src[i])
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first input string
 * @s2: second input string
 * @n: number of bytes
 *
 * Return: pointer to new memory s1 followed by n bytes of s2, if fail (NULL)
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *result;
	unsigned int rlen;

	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
	rlen = len1 + len2 + 1;
	}
	else
	{
	rlen = len1 + n + 1;
	}

	result = malloc(rlen * sizeof(char));

	if (result == NULL)
	{
	return (NULL);
	}

	_strcpy(result, s1);

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
	result[len1 + i] = s2[i];
	}
	result[len1 + i] = '\0';

	return (result);
}
