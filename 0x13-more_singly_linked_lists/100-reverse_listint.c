#include "lists.h"

/**
 * reverse_listint - a function that reverses a single linked list
 * @head: the single linked list
 * Return: the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *after;

	while (*head != NULL)
	{
		after = head->link;
		head->link = previous;
		previous = head;
		head = after;
	}
	head = previous;
	return (head);
}
