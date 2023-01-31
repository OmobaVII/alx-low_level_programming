#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at index
 * @head: the singly linked list
 * @index: the node to delete
 * Return: 1 if deleted, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *previous, *ptr, *current;

	previous = *head;
	current = *head;
	ptr = *head;

	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	if (*head == NULL || count < index)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 0)
		{
			previous = current;
			current = current->next;
			index--;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
