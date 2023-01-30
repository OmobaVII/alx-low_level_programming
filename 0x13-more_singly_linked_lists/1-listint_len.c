#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked list
 * @h: the singly linked list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
