#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a string
 * @head: pointer to list head
 * @n: element data
 * Return: pointer to new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new;
	}

	return (*head);
}
