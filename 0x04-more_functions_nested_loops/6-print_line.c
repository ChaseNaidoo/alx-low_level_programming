#include "main.h"

/**
 * print_line - Entry point
 *
 *@n: is the number _ is printed
 *
 * Return: 1 ('_'), 0 ('\n')
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
{
	_putchar('_');
}
	_putchar('\n');
}
