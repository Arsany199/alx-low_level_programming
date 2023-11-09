#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: the head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *my_list;

	while (head)
	{
		my_list = head;
		head = head->next;
		free(my_list);
	}
}
