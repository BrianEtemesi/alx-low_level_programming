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
	dlistint_t *prevNode, *newNode;
	size_t len = getlen(temp);
	size_t i = 0;

	if (idx > len)
		return (NULL);

	if ((temp == NULL) && (idx == 0))
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	if (idx == len)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	prevNode = temp->prev;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	prevNode->next = newNode;
	newNode->prev = prevNode;
	newNode->next = temp;
	temp->prev = newNode;

	return (newNode);

}
