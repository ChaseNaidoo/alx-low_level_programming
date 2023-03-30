#include "main.h"

/**
 * rot13 - entry point
 *
 * @str: input characters
 *
 * Return: (str)
 */
char *rot13(char *str)
{
	char *c = str;

	while (*c != '\0')
{
	if ((*c >= 'a' && *c <= 'm') || (*c >= 'A' && *c <= 'M'))
{
	*c = *c + 13;
}
	else if ((*c >= 'n' && *c <= 'z') || (*c >= 'N' && *c <= 'Z'))
{
	*c = *c - 13;
}
	c++;
}
	return (str);
}
