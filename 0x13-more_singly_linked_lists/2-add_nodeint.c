#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: double pointer on the first node in the linked list
 * @n: is the value of the node
 *
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
