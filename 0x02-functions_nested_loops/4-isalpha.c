#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: the character to check
 *
 * checks whether the value of c is A and Z, inclusive.
 *
 * Return: 1 (uppercase), Return: 0 (otherwise)
 *
 */
int _isalpha(int c)
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
