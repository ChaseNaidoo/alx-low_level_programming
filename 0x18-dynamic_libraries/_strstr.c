#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: input string
 * @needle: input substring
 *
 * Return: pointer to the beginning of the located substring, if not found NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int i = needle[0];

	if (i == 0)
	return (haystack);

	for (; haystack[0] != '\0'; haystack++)
	{
	if (haystack[0] != i)
	continue;

	for (a = 1; needle[a] != 0; a++)

	if (haystack[a] != needle[a])
	break;

	if (needle[a] == '\0')
	return (haystack);
	}
	return ('\0');
}
