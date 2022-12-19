#include "lists.h"

/**
 * dlistint_len - counts elements in a list
 * @h: pointer to head node
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	return (i);
}
