#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 0; first < 9; first++)
	{
	for (second = first + 1; second < 9; second++)
	{
	for (third = second + 1; third < 10; third++)
	{
	putchar((first % 10) + '0');
	putchar((second % 10) + '0');
	putchar((third % 10) + '0');
	if (first == 7 && second == 8 && third == 9)
	continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
