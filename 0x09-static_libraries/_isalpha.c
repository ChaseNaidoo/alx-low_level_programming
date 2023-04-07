#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: the character to check
 *
 * checks if the value of c is a and z or if the value is A and Z, inclusive
 *
 * Return: 1 (uppercase), Return: 0 (otherwise)
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
	else
{
	return (0);
}
}
