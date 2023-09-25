#include "lists.h"

/**
 * get_nodeint_at_index - determine the number of a specific node
 * @head: pointer to the first node
 * @index: the index of the node
 *
 * Return: the number of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head == NULL)
		return (NULL);

	while (node < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		node++;
	}
	return (head);
}
