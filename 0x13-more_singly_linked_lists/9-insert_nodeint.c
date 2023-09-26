#include "lists.h"

/**
 * insert_nodeint_at_index - insert an int in the linked list
 * @head: double pointer on the first element in the linked list
 * @idx: is the number of the index
 * @n: is the number to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (*head && idx != 0)
	{
		temp = *head;
		for (; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
