#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, b is NULL or no matching char (0)
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int n = 0;

	if (b == NULL)
	return (0);

	while (b[i] != '\0')
	{
	if (b[i] == '0' || b[i] == '1')
		{
		n <<= 1;
		n += b[i] - '0';
		i++;
		}
		else
		{
		return (0);
		}
	}
	return (n);
}
