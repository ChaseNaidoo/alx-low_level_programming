#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 *
 * @format: type of argument passed
 *
 * Return: (no return)
 *
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
	switch (format[i])
		{
		case 'c':
		printf("%c", va_arg(args, int));
		break;

		case 'i':
		printf("%d", va_arg(args, int));
		break;

		case 'f':
		printf("%f", va_arg(args, double));
		break;

		case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		s = "(nil)";
		printf("%s", s);
		break;

		default:
		i++;
		continue;
		}
	if (format[i + 1] != '\0')
	printf(", ");
	i++;
	}
	va_end(args);
	printf("\n");
}
