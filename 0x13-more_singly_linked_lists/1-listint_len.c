#include "lists.h"

/**
 * listint_len - counts number of elements in a linked list
 * @h: list head - pointer to head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
