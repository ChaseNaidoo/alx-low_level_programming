#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: (Success)
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
{
	_putchar('0');
	for (b = 1; b < 10; b++)
{
	c = (a * b);
	_putchar(',');
	_putchar(' ');
	if (c < 10)
{
	_putchar(' ');
	_putchar(c + '0');
}
	else
{
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');
}
}
	_putchar('\n');
}
}
