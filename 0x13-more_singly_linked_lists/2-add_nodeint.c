#include "lists.h"
#include <stdlib.h>

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
