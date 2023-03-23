#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Return: Void (Success)
 */
void print_numbers(void)
{
	int i;
	char num[10] = "0123456789";

	for (i = 0; i < 10; i++)
	_putchar(num[i]);
	_putchar('\n');
}
