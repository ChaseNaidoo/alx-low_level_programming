#include "main.h"

/**
 * reverse_array - entry point
 *
 * @a: input array of integers
 * @n: input number of elements
 *
 * Return: (no return)
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
{
	temp = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = temp;
}
}
