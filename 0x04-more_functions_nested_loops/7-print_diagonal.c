#include "main.h"

/**
 * print_diagonal - Entry point
 *
 *@n: is the number \ is printed
 *
 * Return: '\', '\n'
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
{
	for (b = 0; b < a; b++)
{
	_putchar(' ');
}
	_putchar('\\');
	if (a < (n - 1))
	_putchar('\n');
}
	_putchar('\n');
}
