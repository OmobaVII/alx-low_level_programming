#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a
 * singly linked list
 * @head: the singly linked list
 * Return: the data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *new_head;

	if (*head == NULL)
		return (0);

	new_head = *head;

	ptr = *head;
	ptr = ptr->next;
	free(new_head);
	return (new_head->n);
}
