#include "main.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: input string to be checked
 * @s2: input string with special character
 *
 * Return: if strings are identical (1), if not (0)
 *
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
{
	return (1);
}
	else if (*s2 == '*')
{
	if (*(s2 + 1) == '\0')
{
	return (1);
}
	else if (*s1 == '\0')
{
	return (0);
}
	else
{
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
}
	else if (*s1 == *s2)
{
	return (wildcmp(s1 + 1, s2 + 1));
}
	else
{
	return (0);
}
}
