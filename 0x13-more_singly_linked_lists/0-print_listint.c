#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elments of a list
 * @h: the singly linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

