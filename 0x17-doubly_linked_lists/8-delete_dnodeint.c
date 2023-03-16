#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at an index
 * @head: the double linked list to delete from
 * @index: the position to delete from
 * Return: 1 for success and -1for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if ((head == NULL) || (*head == NULL))
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while ((index != 0) && temp->next != NULL)
	{
		index--;
		temp = temp->next;
	}
	if (index == 0)
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
		free(temp);
		return (1);
	}
	return (-1);
}
