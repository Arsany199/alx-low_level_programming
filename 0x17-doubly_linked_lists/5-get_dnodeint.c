#include "lists.h"

/**
 * get_dnodeint_at_index - puts node in a specific index
 * @head: the head of the list
 * @index: the index of the node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	for (; head != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
