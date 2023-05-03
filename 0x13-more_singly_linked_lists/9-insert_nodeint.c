#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the pointer of the head of the list
 * @idx: the index list where new code is added
 * @n: input data value
 *
 * Return: address of new node, if fail or not possible (NULL)
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
	return (NULL);

	if (idx == 0)
	return (add_nodeint(head, n));

	node = *head;

	for (i = 0; node != NULL && i < idx - 1; i++)
	{
	node = node->next;
	}

	if (i != idx - 1 || node == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = node->next;
	new_node = node->next;

	return (new_node);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to head of list
 * @n: integer to be stored
 *
 * Return: address of the new element, if fail (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
