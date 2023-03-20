#include "main.h"

/**
 * _islower - Entry point
 *
 * checks whether the ASCII value of c is between 97 and 122, inclusive.
 *
 * Return: 1 (lowercase), Return: 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
	_putchar('\n');
}
