#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the eleements of a list
 * @h: a singly linked list
 * Return: the number of nodes of the singly linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;

		h = h->next;
	}

	return (count);
}
