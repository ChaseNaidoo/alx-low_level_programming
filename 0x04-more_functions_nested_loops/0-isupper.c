#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c: the character to check
 *
 * checks whether the value of c is A and Z, inclusive.
 *
 * Return: 1 (uppercase), Return: 0 (otherwise)
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
{
	return (0);
}
}
