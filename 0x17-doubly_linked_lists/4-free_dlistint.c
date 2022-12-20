#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to head node
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
