#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning of
 * a singly linked list
 * @head: the singly linked list
 * @n: the data of the singly linked list
 * Return: a pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
