#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 2;
	long int first = 1, second = 2, third;

	printf("%lu, %lu", first, second);

	while (count < 98)
{
	printf("%lu, ", third);
	first = second;
	second = third;
	third = (first + second);
	third++;
}
	printf("%lu\n", third);
	return (0);
}
