#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a double linked list
 * @head: the double linked list
 * @n: the data of the new node
 * Return: a pointer to the new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	return (new);
}
