#include "lists.h"

/**
 * free_listint - a function that frees a singly linked list
 * @head: the singly linked list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
