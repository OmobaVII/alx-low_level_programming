#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the node of a double
 * linked list at index position
 * @head: the double linked list
 * @index: the node position to return
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int position, count;

	current = head;
	temp = head;
	position = 0;
	count = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
	{
		return (NULL);
	}
	while (position != index)
	{
		position++;
		current = current->next;
	}
	return (current);
}
