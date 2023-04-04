#include "main.h"

/**
 * set_string - sets value of a pointer to a char.
 *
 * @s: the pointer
 * @to: character to set value of pointer
 *
 * Return: (no return)
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
