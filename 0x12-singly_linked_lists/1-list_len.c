#include "lists.h"
#include <stdio.h>

/**
 * list_len - that returns the number of elements in a linked list_t list
 * @h: the pointer to the list_t
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
