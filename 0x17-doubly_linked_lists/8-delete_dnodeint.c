#include "lists.h"

/**
 * getlen - gets length of list
 * @h: pointer to head node
 * Return: length
 */

size_t getlen(dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
/**
 * delete_dnodeint_at_index - deletes node
 * @head: pointer to head node
 * @index: index of node to be deleted
 * Return: 1 for success, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevNode, *nextNode, *temp = *head;
	size_t i = 0;

	if (temp == NULL)
		return (-1);
	/* len = getlen(temp); */
	/* if (index > len) */
		/* return (-1); */
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			free(temp);
			*head = NULL;
		}
		else
		{
			nextNode = temp->next;
			free(temp);
			*head = nextNode;
			nextNode->prev = NULL;
		}
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	prevNode = temp->prev;
	if (temp->next == NULL)
	{
		free(temp);
		prevNode->next = NULL;
		return (1);
	}
	nextNode = temp->next;
	free(temp);
	prevNode->next = nextNode;
	nextNode->prev = prevNode;
	return (1);
}
