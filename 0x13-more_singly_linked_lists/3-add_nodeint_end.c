#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the linked list
 * @head: double pointer to the first node
 * @n: is the value of the node
 *
 * Return: the new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
	}
	if (temp != NULL)
	{
		temp->next = new;
	}
	return (new);
}
