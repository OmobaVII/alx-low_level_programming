#include "lists.h"

/**
 * free_listint2 - a function that frees a singly linked list
 * and sets the head to NULL
 * @head: the single linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *next;

	if (*head == NULL)
		return;
	ptr = *head;
	*head = NULL;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
