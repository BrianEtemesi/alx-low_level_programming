#include "lists.h"

/**
 * sum_dlistint - sums all data in linked list
 * @head: pointer to head node
 * Return: total sum of list data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
