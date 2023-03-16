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
	dlistint_t *current = *h, *temp = *h, *new, *temp2;
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
		return (add_dnodeint(dlistint_t **head, const int n))
	}
	if (current->next == NULL)
	{
		return (add_dnodeint_end(dlistint_t **head, const int n))
	}
	temp2 = current->prev;
	current->prev = new;
	temp2->next = new;
	new->next = current;
	new->prev = temp2;
	return (new);
}
