#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: input integer
 * @max: input integer
 *
 * Return: pointer to new array, if fail (NULL)
 */
int *array_range(int min, int max)
{
	int i, size;
	int *a;

	if (min > max)
	{
	return (NULL);
	}

	size = (max - min + 1);
	a = malloc(size * sizeof(int));

	if (a == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	a[i] = min + i;
	}
	return (a);
}
