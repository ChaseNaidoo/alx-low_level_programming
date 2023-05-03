#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *node, *tmp;

	if (h == NULL || *h == NULL)
	return (size);

	node = *h;

	while (node != NULL)
	{
	size++;
	tmp = node;
	node = node->next;

	if (tmp <= node)
	{
	free(tmp);
	}
	else
		{
		free(node);
		break;
		}
	}

	*h = NULL;

	return (size);
}
