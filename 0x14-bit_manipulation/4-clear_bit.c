#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer to the number to use
 * @index: index to set bit
 *
 * Return: 1 (success), -1 (error)
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;
	return (1);
}
