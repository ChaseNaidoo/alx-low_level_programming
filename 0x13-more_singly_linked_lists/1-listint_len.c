#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked list_t list.
 *
 * @h: head of the list
 *
 * Return: the number of elements in the list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	i++;
	h = h->next;
	}
	return (i);
}
