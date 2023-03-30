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
	char c;
	int i;

	for (i = 0; str[i] != '\0'; i++)
{
	c = str[i];
	if (c >= 'a' && c <= 'm')
{
	c += 13;
}
	else if (c >= 'n' && c <= 'z')
{
	c -= 13;
}
	else if (c >= 'A' && c <= 'M')
{
	c += 13;
}
	else if (c >= 'N' && c <= 'Z')
{
	c -= 13;
}
	str[i] = c;
}
	return (str);
}
