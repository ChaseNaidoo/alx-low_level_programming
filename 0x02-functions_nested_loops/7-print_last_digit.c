#include "main.h"

/**
 * print_last_digit - Entry point
 *
 *@r: is the number
 *
 * Return: (Last digit)
 */
int print_last_digit(int r)
{
	r = r % 10;

	if (r > 0)
{
	_putchar((r % 10) + '0');
	return (r);
}
	else
{
	_putchar(-(r % 10) + '0');
	return (-r);
}
}
