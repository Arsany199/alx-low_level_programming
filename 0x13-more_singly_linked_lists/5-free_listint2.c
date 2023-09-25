#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: double pointer on the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		listint_t *next = temp->next;

		free(temp);
		temp = next;
	}
	*head = temp;
}
