#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a specific index
 * @h: is a double pointer to the head
 * @idx: is the number of the index that will insert the element
 * @n: the value of the element
 * Return: the list with the added element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *now;
	unsigned int i = 0;

	if (h == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	now = *h;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (now)
	{
		if (now->next == NULL && i == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if ((idx - 1) == i)
		{
			new_node->next = now->next;
			new_node->prev = now;
			now->next->prev = new_node;
			now->next = new_node;
			return (new_node);
		}
		i++;
		now = now->next;
	}
	free(new_node);
	return (NULL);
}
