#include "main.h"

/**
 * binarysearch - binary search using recursive method to find square root
 *
 * @x: input integer
 * @low: lower bound
 * @high: upper bound
 *
 * Return: empty range (-1), mid = square root of n (mid), in range (call)
 */
int binarysearch(int x, int low, int high)
{
	int mid;

	if (low > high)
{
	return (-1);
}
	mid = ((low + high) / 2);

	if (mid * mid == x)
{
	return (mid);
}
	else if (mid * mid > x)
{
	return (binarysearch(x, low, mid - 1));
}
	else
{
	return (binarysearch(x, mid + 1, high));
}
}

/**
 * _sqrt_recursion - return the natural square root of a number.
 *
 * @n: input integer
 *
 * Return: natural square root of a number, n < 0 (-1), n = 0 or 1 (n)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
{
	return (-1);
}
	else if (n == 0 || n == 1)
{
	return (n);
}
	else
{
	return (binarysearch(n, 0, n));
}
}
