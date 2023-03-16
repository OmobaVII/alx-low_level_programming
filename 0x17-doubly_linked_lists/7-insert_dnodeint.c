#include "lists.h"

/**
 * new_node - a function that inserts a node
 * @ptr: the double linked list
 * @n: the data of the node
 * Return: a pointer to the new node
 */

dlistint_t *new_node(dlistint_t *ptr, int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = ptr;
	node->prev = ptr->prev;
	ptr->prev->next = node;
	ptr->prev = node;
	return (node);
}

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
	dlistint_t *current = *h, *temp = *h, *temp2 = *h, *new;
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
	temp = *h;
	while ((idx != 0) && (temp2->next != NULL))
	{
		idx--;
		temp2 = temp2->next;
		if (idx == 0)
			return (new_node(temp2, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
