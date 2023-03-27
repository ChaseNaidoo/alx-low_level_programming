#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: (no return)
 *
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
