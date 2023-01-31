#include "lists.h"

/**
 * reverse_listint - a function that reverses a single linked list
 * @head: the single linked list
 * Return: the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *after;

	previous = NULL;

	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = after;
	}
	*head = previous;
	return (*head);
}
