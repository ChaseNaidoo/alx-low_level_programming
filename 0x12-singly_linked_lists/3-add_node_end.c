#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to head of list
 * @str: string to be added to end of list
 *
 * Return: address of the new element, or (NULL) if fail
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *i;

	if (head == NULL || str == NULL)
	return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
	return (NULL);

	node->str = strdup(str);

	if (node->str == NULL)
	{
	free(node);
	return (NULL);
	}

	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
	*head = node;
	return (node);
	}

	i = *head;

	while (i->next != NULL)
	i = i->next;
	i->next = node;
	return (node);
}


/**
 * _strlen - Entry point
 *
 * @s: input character
 *
 * Return: (length of string)
 *
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	i++;
	}
	return (i);
}
