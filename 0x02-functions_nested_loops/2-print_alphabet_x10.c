#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (c = 0; c < 26; c++)
	_putchar(alp[c]);
	_putchar('\n');
}
}
