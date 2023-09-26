#include "lists.h"

/**
 * sum_listint - sum the linked list elements
 * @head: pointer on the first element in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
