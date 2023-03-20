#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: the character to check
 *
 * checks whether the value of c is a and z, inclusive or whether the value is A and Z, inclusive
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
