#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 *
 * Return: a pointer to the duplicated string, str or  no memory (NULL)
 *
 */
char *_strdup(char *str)
{
	char *s;
	char *p;
	int len = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[len])
	len++;
	s = malloc(len + 1);
	p = s;

	while (*str)
	*p++ = *str++;
	*p = '\0';
	return (s);
}
