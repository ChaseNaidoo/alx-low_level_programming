#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: pointer to nth node, if it does not exist (NULL)
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;

	for (i = 0; node != NULL && i < index; i++)
	{
	node = node->next;
	}

	if (i != index || node == NULL)
	{
	return (NULL);
	}
	return (node);
}
