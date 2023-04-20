#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: string to be printed
 * @n: number of strings passed to function
 *
 * Return: (no return)
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}

		if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
