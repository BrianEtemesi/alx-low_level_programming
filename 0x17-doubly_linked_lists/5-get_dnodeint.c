#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at given index
 * @head: pointer to head node
 * @index: index
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j, i = 0;
	dlistint_t *temp = head;
	dlistint_t *temp1 = head;

	if (head == NULL)
		return (NULL);

	j = 0;
	while (temp1 != NULL)
	{
		j++;
		temp1 = temp1->next;
	}

	if (index > j)
		return (NULL);

	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
