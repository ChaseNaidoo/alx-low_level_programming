#include "main.h"

/**
 * cap_string - entry point
 *
 * @str: input characters
 *
 * Return: (str)
 */
char *cap_string(char *str)
{
	int i, a;
	int cap = 1;
	char sep[] = {
	' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};
	int n = sizeof(sep) / sizeof(sep[0]);

	for (i = 0; str[i] != '\0'; i++)
{
	if ((str[i] >= 'a' && str[i] <= 'z') && cap)
{
	str[i] = str[i] - 32;
	cap = 0;
}
	else
{
	for (a = 0; a < n; a++)
{
	if (str[i] == sep[a])
{
	cap = 1;
	break;
}
}
	if (a == n)
{
	cap = 0;
}
}
}
	return (str);
}
