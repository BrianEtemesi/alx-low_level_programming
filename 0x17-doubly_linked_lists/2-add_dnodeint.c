#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of list
 * @head: pointer to head node
 * @n: data value
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
