#include "main.h"

/**
 * print_sign - Entry point
 *
 *@n: is the number
 *
 * Return: 1 (Positive), -1 (Negative), 0 (Zero)
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
{
	_putchar('0');
	return (0);
}
}
