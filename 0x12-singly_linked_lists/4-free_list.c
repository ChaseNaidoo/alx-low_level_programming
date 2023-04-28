#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list.
 *
 * @head: pointer to head of the list
 *
 * Return: (no return)
 *
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
	ptr = head;
	head = head->next;

	free(ptr->str);
	free(ptr);
	}
}
