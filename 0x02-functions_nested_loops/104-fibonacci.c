#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 1, third = 2, count = 2;

	printf("%lu, %lu", first, second);
	while (count < 98)
{
	third = (first + second);
	printf(", %lu", third);
	first = second;
	second = third;
	count++;
}
	printf("\n");
	return (0);
}
