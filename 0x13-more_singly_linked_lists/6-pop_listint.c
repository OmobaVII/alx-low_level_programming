#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * singly linked list
 * @head: the singly linked list
 * Return: the data of the head node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}

	ptr = *head;
	*head = (*head)->next;
	n = ptr->n;
	free(ptr);

	return (n);
}
