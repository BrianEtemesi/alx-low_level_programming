#include "lists.h"

/**
 * print_dlistint - prints out elements of a linked list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}

	return (i);
}
