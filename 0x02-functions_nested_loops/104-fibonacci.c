#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2;

	printf("%lu, %lu, ", first, second);

	for (int i = 2; i < 98; i++)
{
	int c = (a + b);
	printf("%d", c);
	if (i < 97)
{
	printf(", ");
}
	a = b;
	b = c;
}
	printf("\n");
	return (0);
}
