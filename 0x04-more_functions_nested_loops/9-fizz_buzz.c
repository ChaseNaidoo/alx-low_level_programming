#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
{
	if (i % 15 == 0)
{
	printf("FizzBuzz ");
}
	else if (i % 3 == 0)
{
	printf("Fizz ");
}
	else if (i % 5 == 0)
{
	printf("Buzz ");
}
	else
{
	printf("%i ", i);
}
}
	printf("\n");
	return (0);
}
