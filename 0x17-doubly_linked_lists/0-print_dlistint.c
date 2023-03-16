#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a doubly linked list
 * @h: the doubly linked lists
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a;
	const dlistint_t *temp;

	temp = h;
	a = 0;
	while (temp != NULL)
	{
		a++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (a);
}
