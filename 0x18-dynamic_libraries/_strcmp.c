#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: 0 (s1 = s2), > 0 (s2, s1), < 0 (s1, s2)
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
