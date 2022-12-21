#include "lists.h"

/**
 * getlen - gets length of list
 * @h: pointer to head node
 * Return: length of node
 */

size_t getlen(dlistint_t *h)
{
	size_t i = 0;
	
	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
/**
 * insert_dnodeint_at_index - inserts node at specified index
 * @h: double pointer to head node
 * @idx: index
 * @n: data value
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	size_t len = getlen(temp);

	printf("length of list: %ld\n", len);
	printf("node data: %d\n", n);
	printf("temp value: %d\n", temp->n);
	if (idx > len)
		return (NULL);

	return (temp);


}
