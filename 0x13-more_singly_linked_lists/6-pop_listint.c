#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head to be deleted
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int my_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	my_data = temp->n;
	*head = temp->next;
	free(temp);
	return (my_data);
}
