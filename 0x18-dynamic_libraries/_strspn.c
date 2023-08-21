#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: input string to be searched
 * @accept: set of characters to search for
 *
 * Return: number of bytes of segment s which consists of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	if (*s == '\0' || *accept == '\0')
	{
	return (0);
	}
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if (accept[j] == s[i])
			{
			break;
			}
		}
		if (accept[j] == '\0')
		{
		break;
		}
	}
	return (i);
}
