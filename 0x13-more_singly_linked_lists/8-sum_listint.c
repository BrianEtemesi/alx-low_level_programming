#include "lists.h"

/**
 * sum_listint - sums up all the data of a linked list
 *
 * @head: pointer to head.
 *
 * Return: sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
