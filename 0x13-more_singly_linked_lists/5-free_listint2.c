#include "lists.h"

/**
 * free_listint2 - a function that frees a singly linked list
 * and sets the head to NULL
 * @head: the single linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	*head = NULL;
}
