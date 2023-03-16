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
	dlistint_t *temp;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	temp = *h;
	while ((idx != 0) && (temp->next != NULL))
	{
		idx--;
		temp = temp->next;
		if (idx == 0)
			return (new_node(temp, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
