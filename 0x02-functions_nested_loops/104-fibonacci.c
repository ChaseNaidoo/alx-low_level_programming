#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int counter = 2;

	unsigned long int a = 1, b = a + 1, c = (a + b) % 4294967296UL;

	printf("%lu, %lu, ", a, b);

	while (counter < 98)
{
	printf("%.0f", c);
	a = b;
	b = c;
	c = (a + b) % 4294967296UL;
	counter++;
	if (counter < 98)
{
	printf(", ");
}
}
	printf("\n");
	return (0);
}
