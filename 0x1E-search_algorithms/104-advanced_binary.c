#include "search_algos.h"

/**
 * rec_search - searches for a value in an array of integers
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: value not present or NULL (-1)
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
	return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
	printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
	half--;

	if (value == array[half])
	{
	if (half > 0)
	return (rec_search(array, half + 1, value));
	return ((int)half);
	}
	if (value < array[half])
	return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary -searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: value not present or NULL (-1)
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
	return (-1);

	return (index);
}
