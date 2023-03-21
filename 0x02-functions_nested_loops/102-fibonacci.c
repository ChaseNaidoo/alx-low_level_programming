#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 3;

	long int first = 1, second = 2;
	long int n = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
	if (count == 50)
{
	printf("%lu\n", n);
}
	else
{
	printf("%lu, ", n);
}
	first = second;
	second = n;
	n = (first + second);
	count++;
	}
	return (0);
}
