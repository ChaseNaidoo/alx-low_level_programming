#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: input integer to be factorised
 *
 * Return: factorial of n, n < 0 (-1), n = 0 (1)
 *
 */
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
	else if (n == 0)
{
	return (1);
}
	else
{
	return (n * (factorial(n - 1)));
}
}
