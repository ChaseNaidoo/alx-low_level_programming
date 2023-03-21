#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 1, third = 2, sum = 0;
	while (third <= 4000000)
{
	if (third % 2 == 0)
{
	sum += third;
}
	first = second;
	second = third;
	third = (first + second);
}
	printf("%lu\n", sum);
	return (0);
}
