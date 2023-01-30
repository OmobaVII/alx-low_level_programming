#include "lists.h"

/**
 * sum_listint - a function that sums the data of a singly
 * linked list
 * @head: the singly linked list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
