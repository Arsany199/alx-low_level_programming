#include "lists.h"

/**
 * sum_dlistint - sum all elements in the list
 * @head: the head of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	{

	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	}
	return (sum);
}
