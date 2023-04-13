#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes to copy
 *
 * Return: pointer to memory area (dest)
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previous memory allocated
 * @old_size: bytes of the allocated space for ptr
 * @new_size: bytes of the new memory block
 *
 * Return: pointer to new block
 * return new_size = old_size (ptr), new_size = zero and ptr != NULL (NULL)
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	{
	return (malloc(new_size));
	}

	if (new_size == old_size)
	{
	return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
	return (NULL);
	}

	if (new_size > old_size)
	{
	_memcpy(new_ptr, ptr, old_size);
	}
	else
	{
	_memcpy(new_ptr, ptr, new_size);
	}
	free(ptr);

	return (new_ptr);
}
