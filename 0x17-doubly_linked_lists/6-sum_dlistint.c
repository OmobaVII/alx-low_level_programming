#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * in a double linked list
 * @head: the double linked list
 * Return: sum of all data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	current = head;

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
