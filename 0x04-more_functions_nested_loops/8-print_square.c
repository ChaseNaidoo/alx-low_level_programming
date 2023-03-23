#include "main.h"

/**
 * print_square - Entry point
 *
 *@size: is the number of # printed
 *
 * Return: '#', '\n'
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
{
	for (b = 0; b < size; b++)
{
	_putchar('#');
}
	if (a != size - 1)
	_putchar('\n');
}
	_putchar('\n');
}
