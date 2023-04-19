#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name.
 *
 * @name: name of person
 * @f: function pointer
 *
 * Return: (no return)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}
