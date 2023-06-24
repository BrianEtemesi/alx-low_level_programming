#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: double pointer to head node
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	h_node = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (h_node);
}
