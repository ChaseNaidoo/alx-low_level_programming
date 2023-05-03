#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t i = 0;
	size_t index;

	if (head == NULL)
	exit(98);

	slow = head;
	fast = head->next;

	while (slow != NULL)
	{
	printf("[%p] %d\n", (void *) slow, slow->n);
	i++;

	if (slow != NULL && fast != NULL && slow < fast)
	{
	slow = slow->next;
	if (slow != NULL)
	fast = slow->next;
	continue;
	}

	for (index = 0; index < i; index++)
	{
	if (slow == fast)
		{
		printf("-> [%p] %d\n", (void *) slow, slow->n);
		return (i);
		}
		if (fast != NULL)
		fast = fast->next;
	}

	slow = slow->next;

	if (slow != NULL)
	fast = slow->next;
	}
	return (i);
}
