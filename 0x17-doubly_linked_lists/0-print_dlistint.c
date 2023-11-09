#include "lists.h"

/**
 * print_dlistint - print elements in dlistint
 * @h: the head of the list
 * Return: numbers of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	for (; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
