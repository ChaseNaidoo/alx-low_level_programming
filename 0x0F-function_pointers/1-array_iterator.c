#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execute function for each element of an array
 *
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function used
 *
 * Return: (no return)
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0 && array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	action(array[i]);
	}
}
