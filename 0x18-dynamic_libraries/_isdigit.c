#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: the character to check
 *
 * checks if the value of c is a digit
 *
 * Return: 1 (digit), Return: 0 (otherwise)
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
