#include "lists.h"

/**
 * free_listint - frees the linked list listint_t
 * @head: pointer to the first element in listint_t
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
