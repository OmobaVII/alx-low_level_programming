#include "lists.h"

/**
 * free_listint2 - a function that frees a singly linked list
 * and sets the head to NULL
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *next;

	ptr = *head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
