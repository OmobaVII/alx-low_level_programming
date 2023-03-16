#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in
 * a double linked list
 * @h: the double linked list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	count = 0;
	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
