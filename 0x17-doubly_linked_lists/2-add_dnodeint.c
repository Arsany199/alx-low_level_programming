#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds node at the beggining of list
 * @head: is the head of the list
 * @n: value of the new node
 * Return: address to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	else
		new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
	}
	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
