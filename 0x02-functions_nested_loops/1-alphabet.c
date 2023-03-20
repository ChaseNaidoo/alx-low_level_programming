#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Void (Success)
 */
void print_alphabet(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	_putchar(alp[i]);
	_putchar('\n');
}
