#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to the pointer of the head of the list
 *
 * Return: pointer to the first node of the reversed list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node;
	listint_t *prev_node;

	prev_node = NULL;
	node = *head;

	while (node != NULL)
	{
	*head = node->next;
	node->next = prev_node;
	prev_node = node;
	node = *head;
	}

	*head = prev_node;
	return (*head);
}
