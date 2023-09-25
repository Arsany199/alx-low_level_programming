#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list
 * @h: pointer to the listint_t
 *
 * Return: size
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
