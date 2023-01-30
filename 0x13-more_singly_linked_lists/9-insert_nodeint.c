#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at an index
 * @head: the singly linked list
 * @idx: the point to insert the node
 * @n: the data of the new node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	int count = 0;

	ptr = *head;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	if (count < idx)
		return (NULL);
	else
	{
		ptr = *head;
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		idx--;
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
}
