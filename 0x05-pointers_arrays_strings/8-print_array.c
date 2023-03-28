#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 *@a: the array
 *@n: the number of elements to be printed
 *
 * Return: (no return)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d, ", a[i]);
}
	printf("\n");
}
