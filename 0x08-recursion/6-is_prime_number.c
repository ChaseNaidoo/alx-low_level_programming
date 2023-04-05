#include "main.h"

/**
 * getprime - returns 1 if input integer is a prime, otherwise return 0.
 *
 * @x: input integer to check
 * @i: divisor to check
 *
 * Return: prime number (1), not prime number (0)
 *
 */
int getprime(int x, int i)
{
	if (i == 1)
{
	return (1);
}
	else if (x % i == 0)
{
	return (0);
}
	else
{
	return (getprime(x, i - 1));
}
}

/**
 * is_prime_number - returns 1 if input integer is a prime, otherwise return 0.
 *
 * @n: input integer to check
 *
 * Return: prime number (1), not prime number (0)
 *
 */
int is_prime_number(int n)
{
	if (n < 2)
{
	return (0);
}
	else
{
	return (getprime(n, n - 1));
}
}
