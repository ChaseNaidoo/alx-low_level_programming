#include <stdlib.h>

/**
 * create_array - creates array of chars, and initializes it with a char.
 *
 * @size: size of memory
 * @c: character to be initialized
 *
 * Return: pointer to an array, fails or size = 0 (NULL)
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create_array = malloc(size * sizeof(char));

	if (create_array == NULL || size == 0)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	create_array[i] = c;
	}
	return (create_array);
}
