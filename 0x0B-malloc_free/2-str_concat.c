#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: point to new memory with s1 contents, fail (NULL)
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	else
	{
	while (s1[len1])
	len1++;
	}

	if (s2 == NULL)
	{
	s2 = "";
	}
	else
	{
	while (s2[len2])
	len2++;
	}

	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
	return (NULL);
	}

	while (*s1)
	result[i++] = *s1++;
	while (*s2)
	result[i++] = *s2++;
	result[i] = '\0';

	return (result);
}
