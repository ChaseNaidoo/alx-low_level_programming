#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string to be printed
 * @n: number of integers passed to function
 *
 * Return: (no return)
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	j = va_arg(args, int);
	printf("%d", j);

	if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
