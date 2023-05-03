#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 *
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node to be deleted
 *
 * Return: success (1), failure (-1)
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node;
	listint_t *prev_node;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	node = *head;
	*head = (*head)->next;
	free(node);
	return (1);
	}

	prev_node = NULL;
	node = *head;

	for (i = 0; node != NULL && i < index; i++)
	{
	prev_node = node;
	node = node->next;
	}

	if (node == NULL)
	return (-1);

	prev_node->next = node->next;
	free(node);
	return (1);
}
