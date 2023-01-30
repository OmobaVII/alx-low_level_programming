#include "lists.h"

/**
 * add_nodeint_end - A function that adds node at the end
 * of a singly linked list
 * @head: the singly linked list
 * @n: the data of the singly linked list
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
	}
	return (new);
}
