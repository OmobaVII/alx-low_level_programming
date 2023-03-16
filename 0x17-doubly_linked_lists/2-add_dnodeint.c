#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * of a double linked list
 * @head: the double linked list
 * @n: the data of the new node
 * Return: a pointer to the new node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (new);
}
