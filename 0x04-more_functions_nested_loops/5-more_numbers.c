#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
{
	char num[20] = "01234567891011121314";

	for (c = 0; c < 20; c++)
	_putchar(num[c]);
	_putchar('\n');
}
}
