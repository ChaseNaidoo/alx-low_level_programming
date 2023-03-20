#include "main.h"

/**
 * _islower - Entry point
 *
 * @c: the character to check
 *
 * checks whether the value of c is a and z, inclusive.
 *
 * Return: 1 (lowercase), Return: 0 (otherwise)
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{	  
	return (0);
}
}
