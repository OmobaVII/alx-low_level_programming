#include "lists.h"

/**
 * free_listint2 - a function that frees a singly linked list
 * and sets the head to NULL
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	ptr = *head;
	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	free (ptr);
	ptr = NULL;
}
