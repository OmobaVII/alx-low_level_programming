#include "lists.h"

/**
 * free_list - a function that frees a singly linked list
 * @head: the singly linked list
 * Return: void
 */

void free_list(list_t *head)
{

	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		head->len = 0;
		free(head);
		head = head->next;
	}
}
