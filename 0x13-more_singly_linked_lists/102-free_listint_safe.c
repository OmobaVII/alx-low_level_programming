#include "lists.h"

/**
 * free_listint_safe - a function used to free a singly linked list
 * @head: the list
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	int count;

	ptr = *h;

	while (ptr != NULL)
	{
		count++;
		free(ptr);
		ptr = ptr->next;
	}
	return (count);
}
