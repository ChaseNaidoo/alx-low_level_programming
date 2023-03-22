#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int counter = 2;
	const int MOD = 1000000000;

	long int a = 1, b = a + 1, c = (a + b);
	
	printf("%lu, %lu, ", a, b);

	while (counter < 98)
{
	printf("%lu", c % MOD);
	a = b;
	b = c;
	c = (a + b) % MOD;
	counter++;
	if (counter < 98)
{
	printf(", ");
}
}
	printf("\n");
	return (0);
}
