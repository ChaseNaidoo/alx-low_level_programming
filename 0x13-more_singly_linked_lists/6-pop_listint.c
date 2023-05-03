#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a listint_t linked list and returns (n)
 *
 * @head: pointer to the head of the list
 *
 * Return: the data of the head node, if empty (0)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
	return (0);

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
