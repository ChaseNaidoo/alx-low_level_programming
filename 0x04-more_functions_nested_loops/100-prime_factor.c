#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned int primefactor = 2;

	while (primefactor != n)
{
	if (n % primefactor == 0)
{
	n /= primefactor;
}
	else
{
	primefactor++;
}
}
	printf("%lu\n", n);
	return (0);
}
