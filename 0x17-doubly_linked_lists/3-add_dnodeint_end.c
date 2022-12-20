#include "lists.h"

/**
 * createNode - creates new node
 * @n: data value
 * Return: pointer to newly created node
 */

dlistint_t *createNode(const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode);
}
/**
 * add_dnodeint_end - adds node at the end of a linked list
 * @head: pointer to address of head node
 * @n: data value
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *newNode = createNode(n);

	if ((*head) == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
