#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 *
 * @nmemb: the array to be allocated memory
 * @size: number of bytes
 *
 * Return: pointer to the allocated memory, if fail, nmenb or size = 0 (NULL)
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned char *p;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
	return (NULL);
	}

	p = ptr;

	for (i = 0; i < nmemb * size; i++)
	p[i] = 0;
	return (ptr);
}
