#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node at index
 * @head: the singly linked list
 * @index: the node to delete
 * Return: 1 if deleted, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;

	previous = *head;
	current = *head;

	if (*head == NULL)
		return (-1);
	if (index == 1)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index != 1)
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
