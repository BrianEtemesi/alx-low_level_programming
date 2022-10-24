#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: head - pointer to list
 * Return: length
 */

size_t list_len(const list_t *h)
{
	unsigned long int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
