#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * list_len - a function that returns the number of element
 * in a singly linked list
 * @h: the singly linked list
 * Return: the number of elements in the singly linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
