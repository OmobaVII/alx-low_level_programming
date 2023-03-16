#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * at a given position
 * @h: the double linked list
 * @idx: the position to add the new node
 * @n: the data of the new node
 * Return: a pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *temp = *h, *new;
	unsigned int pos = 0, count = 0;

	if (h == NULL)
		return (NULL);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (idx + 1 > count)
		return (NULL);
	while (pos != idx)
	{
		pos++;
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new->n = n;
	new->next = current;
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	return (new);
}
