#include "lists.h"

/**
 * free_dlistint - a function that frees a double linked list
 * @head: the double linked list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
