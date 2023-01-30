#include "lists.h"

/**
 * free_listint - a function that frees a singly linked list
 * @head: the singly linked list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
