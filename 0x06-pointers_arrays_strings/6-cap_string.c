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
	int i;
	int cap = 1;

	for (i = 0; str[i] != '\0'; i++)
{
	if ((str[i] >= 'a' && str[i] <= 'z') && cap)
{
	str[i] = str[i] - 32;
	cap = 0;
}
	else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||  str[i] == ';' ||  str[i] == '.' ||  str[i] == '!' ||  str[i] == '?' ||  str[i] == '"' ||  str[i] == '(' ||  str[i] == ')' ||  str[i] == '{' ||  str[i] == '}')
{
	cap = 1;
}
	else
{
	    cap = 0;
}
}
	return (str);
}
