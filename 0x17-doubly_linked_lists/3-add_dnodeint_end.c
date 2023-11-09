#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the list
 * @head: the head of the list
 * @n: the value of the element added
 * Return: the address of the element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	for (; tail->next != NULL; tail = tail->next)

	new->prev = tail;
	tail->next = new;

	return (new);
}
