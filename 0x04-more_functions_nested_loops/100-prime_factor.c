#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int primefactor = 2;

	for (primefactor = 2; primefactor <= n; primefactor++)
{
	if (n % primefactor == 0)
{
	n /= primefactor;
	primefactor--;
}
}
	printf("%ld\n", n);
	return (0);
}
