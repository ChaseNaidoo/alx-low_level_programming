#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - return the sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the data in the list, if empty (0)
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;

	while (node != NULL)
	{
	sum += node->n;
	node = node->next;
	}
	return (sum);
}
